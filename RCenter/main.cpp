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
    //привет git
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("C-UTF-8"));
   setlocale(LC_ALL,"C-UTF-8");
    MainWindow w;
    w.show();
  QMessageBox m;
    QStringList drivers = QSqlDatabase::drivers();
    QSqlDatabase db;
    db=db.addDatabase("QODBC");
    //db.setDatabaseName("d:\\base.mdb");548
    db.setDatabaseName("DRIVER={MS Access Driver (*.mdb, *)};DBQ=D:\\base.accdb");
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
