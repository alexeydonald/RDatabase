#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
#include "QtSql/QSqlDatabase"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QODBCDriver>
#include <QtSql/qsql_odbc.h>
#include <QTextCodec>
#include <QLatin1String>
#include <QtSql/QSqlQueryModel>
#include <QTableView>
#include <QtSql/QSqlTableModel>
#include <QTableWidget>





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init()
{

    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QMessageBox m;
    QSqlDatabase db;
    db=db.addDatabase("QODBC");
    db.drivers();
    db=db.setDatabaseName("DRIVER={Microsoft Access Driver(*.mdb};DBQ=D:\\base.mdb");
    db.open();

    QSqlError err;
    err=db.lastError();
    m.setText(err.text());
    m.show();


    QStringList ta=db.tables();

//    QSqlTableModel model;
//    model.setTable(ta[0]);
//    model.select();

//    QTableView *view = new QTableView;
//    view->setModel(&model);
//    view->setWindowTitle(ta[0]);
//    view->show();

    QSqlQueryModel * modelQ = new QSqlQueryModel(0);
//    modelQ->setQuery("SELECT * FROM "+ta[0]);


//    QTableView * viewQ = new QTableView(0);
//    viewQ->setModel(modelQ);
//    viewQ->setWindowTitle(ta[0]);
//    viewQ->show();
//    db.close();
}
