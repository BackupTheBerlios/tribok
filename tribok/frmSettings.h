/*Tribok 0.0.0.1

Joel Mandell
Jonas Björk

QT4 License
*/
#include <QtGui>
#include <QMessageBox>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QString>
#include <QTabWidget>


TabDialog::TabDialog(QWidget *parent)
        : QDialog(parent)
{
 this->setWindowTitle("Inställningar");
 tabWidget = new QTabWidget(this);
 tabWidget->setGeometry(5,5,400,400);
 tabWidget->addTab(new databasTab(), tr("Databas"));
 tabWidget->addTab(new updateTab(), tr("Uppdateringar"));
 tabWidget->addTab(new layoutTab(), tr("Layout"));
}

databasTab::databasTab(QWidget *parent)
        : QWidget(parent)
{

 /*Testa anslutning-widget*/	
 cmdTestConn = new QPushButton("Testa anslutning",this);
 cmdTestConn->setGeometry(10,180,150,30);
  connect(cmdTestConn, SIGNAL(clicked()),this, SLOT(testConn()));
	
 /*Spara inställningar-widget*/	
 cmdSaveSettings = new QPushButton("Spara",this);
 cmdSaveSettings->setGeometry(10,220,150,30);
  connect(cmdSaveSettings, SIGNAL(clicked()),this, SLOT(saveConn()));

 /*Server-form*/	
 lblServer = new QLabel("Server:",this);
 lblServer->setGeometry(10,5,150,15);
 txtServer = new QLineEdit("",this);
 txtServer->setGeometry(10,23,150,20);
    
 /*Databas-form*/
 lblData = new QLabel("Databas:",this);
 lblData->setGeometry(10,46,150,15);
 txtData = new QLineEdit("",this);
 txtData->setGeometry(10,66,150,20);   
 
 /*User-form*/
 lblUser = new QLabel("Användarnamn:",this);
 lblUser->setGeometry(10,88,150,15);
 txtUser = new QLineEdit("",this);
 txtUser->setGeometry(10,106,150,20);	
 
 /*User-form*/
 lblPass = new QLabel("Lösenord:",this);
 lblPass->setGeometry(10,128,150,15);
 txtPass = new QLineEdit("",this);
 txtPass->setGeometry(10,146,150,20);
 
 /*frmSettings-property*/
 setWindowTitle(tr("Inställningar"));
 setGeometry(100,100,300,300);

 init();	
    
}

updateTab::updateTab(QWidget *parent)
        : QWidget(parent)
{
}

layoutTab::layoutTab(QWidget *parent)
        : QWidget(parent)
{
}

void databasTab::exit()
{
    
}

void databasTab::init()
{

QString settings[10];
int i=0;
 
 QFile file("output");
 
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
   return;
   
  QTextStream in(&file);
   while (!file.atEnd()) 
   {
    i++;
    QString content=in.readLine();
    settings[i]=content;
   }
    
 txtServer->setText( settings[1] );
 txtData->setText( settings[2] ); 	
 txtUser->setText( settings[3] );
 txtPass->setText( settings[4] );

}

void databasTab::showSettings()
{

}

void databasTab::testConn()
{
 QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );
 db.setHostName(txtServer->text());
 db.setDatabaseName(txtData->text());
 db.setUserName(txtUser->text());
 db.setPassword(txtPass->text());
 bool ok = db.open();
    
  if(ok==false) 
  { 
   QMessageBox::warning(this, "Testar anslutning","Anslutningen misslyckades"); 
  } else {
   QMessageBox::information(this, "Testar anslutning","Anslutningen lyckades");
  }
	
}

void databasTab::saveConn()
{

 QFile data("output");
  if (data.open(QFile::WriteOnly | QFile::Truncate)) 
  {
   QTextStream out(&data);
   out << txtServer->text() << endl << txtData->text() << endl << txtUser->text() << endl << txtPass->text() << endl;

  }

}

