#include <QtGui>
#include <QtCore>
#include <QtSql/QSqlDatabase>    // NOTERA DENNA
#include <QDialog>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QString>
#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>

frmLoadData::frmLoadData()
{

 cmdLoad = new QPushButton("Ladda budget",this);
 connect(cmdLoad, SIGNAL( clicked() ), this, SLOT( bytN() ));


 init();
}

void frmLoadData::init() {

 QString sql;
 QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );
 db.setHostName( "localhost" );
 db.setDatabaseName( "tribok" );
 db.setUserName( "root" );
 db.setPassword( "dbd96fin" );
 bool ok = db.open();
    
  if(!ok) { qDebug("Kopplingen misslyckades"); QMessageBox::warning(this, "Fel", "Kunnde inte koppla mot databas, har du ställt in rätt inställningar för databasen?"); }
  qDebug("yeah");
	
  QString data;	
  sql="SELECT namn FROM foretag";
  QSqlQuery query(sql);
    
  if(query.isActive()) 
  {
   
   QSqlQuery query(sql);
    while (query.next()) 
    {
     QString foretagnamn = query.value(0).toString();
     QMessageBox::information(this, "da",foretagnamn);   
    }
    
  }   	    
 db.close();    
  
}

void frmLoadData::bytN()
{
}
