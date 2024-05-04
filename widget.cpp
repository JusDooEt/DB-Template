#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(QCoreApplication::applicationDirPath() + "/Test.db");

    // Validate Database connection
    if(DB.open())
    {
        qDebug() << "Database Connected";
    }
    else
    {
        qDebug() << "Database not connected";
    }

    displayTable("Users");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::displayTable(QString table) const
{
    // Create a Query for the table
    QSqlQuery queryGetUser(DB);

    // Validate the Query
    if(queryGetUser.prepare("SELECT * FROM '" + table + "'"))
    {
        //Validate Query Execution
        if(queryGetUser.exec())
        {
            while(queryGetUser.next())
            {
                qDebug() << queryGetUser.value("UserID").toInt() << queryGetUser.value("UserName").toString() << queryGetUser.value("Password").toString();
            }
        }
        else
        {
            qDebug() << "Could not execute query.";
        }
    }
    else
    {
        qDebug() << "Query Unsuccessful.";
    }
}
