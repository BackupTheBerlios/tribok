/*
Tribok 0.0.0.5
----------------
Coded by Joel Mandell and Jonas Björk
*/

#include <QtGui>
#include <QMessageBox>
#include "mainwindow.h"
#include "frmSettings.h"
#include "frmLoadData.h"

MainWindow::MainWindow()
{
 QMenu menu(this);
 mnuFile = menuBar()->addMenu(tr("&Arkiv"));
 actNew = new QAction(tr("&Nytt projekt"), this);
 actOpen = new QAction(tr("&Öppna projekt"), this);
 actSettings = new QAction(tr("&Inställningar"), this);
 mnuFile->addAction(actNew);
 mnuFile->addAction(actOpen);
 mnuFile->addAction(actSettings);
  connect(actSettings, SIGNAL(triggered()), this, SLOT(showSettings()));
  connect(actOpen, SIGNAL(triggered()), this, SLOT(openData()));
 lblHeader = new QLabel("<h1>Välkommen till tribok</h1>", this);
 lblWelcome = new QLabel("Det ser ut att vara första gången du kör programmet!\nTveka inte då att gå igenom <b>nybörjar</b> guiden för att ta reda\n på möjligheterna med tribok", this);
 lblHeader->setGeometry(10,35,400,50); 
 lblWelcome->setGeometry(15,85,400,150); 
 setWindowTitle(tr("Tribok 0.0.0.5"));
 setGeometry(100,100,240,230);
 showMaximized();
 
 init();


}

void MainWindow::init()
{
 //QMessageBox::information(this,"Tribok!","Denna verision är inte stabil");
}

void MainWindow::showSettings()
{

 TabDialog tabdialog;
 tabdialog.show(); //This is so the MainWindow widget wouldn't be locked
 tabdialog.exec();
}

void MainWindow::openData()
{
 frmLoadData fld;
 fld.show();
 fld.exec();

}

void MainWindow::close()
{
 qWarning("stäng");
}
