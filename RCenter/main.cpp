#include <QtGui/QApplication>
#include "mainwindow.h"


#include "QMessageBox"
#include "QtSql/QSqlDatabase"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QODBCDriver>
#include <qsql_odbc.h>
#include <QTextCodec>
#include <QLatin1String>
#include <QSqlQueryModel>


int main(int argc, char *argv[])
{
<<<<<<< HEAD
    //привет git
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("C-UTF-8"));
=======
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("C-UTF-8"));
>>>>>>> 1042b87a135b93697b9b1cca1016216c9f5644e7
   setlocale(LC_ALL,"C-UTF-8");
    MainWindow w;
    w.show();
  QMessageBox m;
    QStringList drivers = QSqlDatabase::drivers();
    QSqlDatabase db;
    db=db.addDatabase("QODBC");
    //db.setDatabaseName("d:\\base.mdb");548
<<<<<<< HEAD
    db.setDatabaseName("DRIVER={MS Access Driver (*.mdb, *)};DBQ=D:\\base.accdb");
=======
    db.setDatabaseName("DRIVER={MS Access Driver (*.mdb)};DBQ=D:\\base.accdb");
>>>>>>> 1042b87a135b93697b9b1cca1016216c9f5644e7
    db.driverName();
    if (!db.open())
    {

        QSqlError err=db.lastError();
        m.setText(err.text());
        m.show();

    }


//    QSqlQuery query;
//    query.exec("create table Дета (Номер int primary key, "
//               "Имя varchar(20), Фамилия varchar(20))");

//    QSqlQueryModel  model;
//    model.setQuery("select * from Дата",db);

//    query.exec("select *from Дата");

    QStringList ta=db.tables();

//    QString l=ta[1];
//    wchar_t ch[20];
//    l.toWCharArray(ch);

   // m.setText((QString)ch);
    m.show();
    db.close();
    return a.exec();
}
