#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QTabWidget>
#include <QAction>

class QTextEdit;
class QPushButton;
class QLineEdit;
class QLabel;
class QTabWidget;
class QMenu;
class QAction;

class MainWindow : public QMainWindow
{
 Q_OBJECT

public:
 MainWindow();
public slots:

 virtual void close();

private slots:
 virtual void init();
 virtual void showSettings();
 virtual void openData();

private:
 QMenu	*mnuFile;
 QMenu *mnuWindows;  
 QAction *actNew;
 QAction *actOpen;
 QAction *actSettings;
 QLabel *lblWelcome;
 QLabel *lblHeader;
};

class frmLoadData : public QDialog
{
 Q_OBJECT
public:
 frmLoadData();

private slots:
 virtual void init();
 virtual void bytN();
 private:
 QPushButton *cmdLoad; 


};

class TabDialog : public QDialog
{
 Q_OBJECT

 public:
  TabDialog(QWidget *parent = 0);

 private:
  QTabWidget *tabWidget;

    };

class databasTab : public QWidget
{
 Q_OBJECT

 public:
  databasTab(QWidget *parent = 0);
 private slots:
  virtual void init();
  virtual void showSettings();
  virtual void testConn();
  virtual void saveConn();
  virtual void exit();
 private:
  QTabWidget *tabWidget;
  QPushButton *cmdTestConn; 
  QPushButton *cmdSaveSettings; 
  QLineEdit *txtData;
  QLabel *lblData;
  QLineEdit *txtServer;
  QLabel *lblServer;
  QLineEdit *txtUser;
  QLabel *lblUser;
  QLineEdit *txtPass;
  QLabel *lblPass;

};
    
class updateTab : public QWidget
{
 Q_OBJECT

 public:
  updateTab(QWidget *parent = 0);
 private slots:
 
 private:
 QTabWidget *tabWidget;

};

class layoutTab : public QWidget
{
 Q_OBJECT

 public:
  layoutTab(QWidget *parent = 0);
 private slots:
 
 private:
 QTabWidget *tabWidget;

};


#endif
