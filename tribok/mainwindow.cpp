/*
Tribok 0.0.0.5
----------------
Coded by Joel Mandell and Jonas Bj�rk
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
 actOpen = new QAction(tr("&�ppna projekt"), this);
 actSettings = new QAction(tr("&Inst�llningar"), this);
 mnuFile->addAction(actNew);
 mnuFile->addAction(actOpen);
 mnuFile->addAction(actSettings);
  connect(actSettings, SIGNAL(triggered()), this, SLOT(showSettings()));
  connect(actOpen, SIGNAL(triggered()), this, SLOT(openData()));
 lblHeader = new QLabel("<h1>V�lkommen till tribok</h1>", this);
 lblWelcome = new QLabel("Det ser ut att vara f�rsta g�ngen du k�r programmet!\nTveka inte d� att g� igenom <b>nyb�rjar</b> guiden f�r att ta reda\n p� m�jligheterna med tribok", this);
 lblHeader->setGeometry(10,35,400,50); 
 lblWelcome->setGeometry(15,85,400,150); 
 setWindowTitle(tr("Tribok 0.0.0.5"));
 setGeometry(100,100,240,230);
 showMaximized();
 
 init();


}

void MainWindow::init()
{
 //QMessageBox::information(this,"Tribok!","Denna verision �r inte stabil");
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
 qWarning("st�ng");
}
