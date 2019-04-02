#include <QPushButton>
#include <QDebug>
#include <Eigen/Dense>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "ui/mainwidget.h"
#include "utils/cryptography.h"



MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent) {
    QPushButton* btn = new QPushButton;
    btn->setParent(this);
    btn->setText(QString("按钮"));
    Eigen::MatrixXd matrix(2, 2);
    qDebug() << matrix.rows() << endl;
    codespot::Cryptography crypto;
    ConnectionTest();
}

MainWidget::~MainWidget() {

}

void MainWidget::ConnectionTest() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("knowledge_commons");
    db.setUserName("root");
    db.setPassword("root");
    if (db.open()) {
        QSqlQuery query(db);
        bool ok = query.exec("insert into base_auth_user values(503599430734112358, 'Noa Swartz', '2545D5967B7C84011D5EAADBF865D4CA', '13687018680', 'warless@gmail.com', '2019-04-01 19:33:12', 1)");
        if (!ok) {
            qDebug() << "query fail!" << endl;
        }
        db.close();
    } else {
        qDebug() << "Open fail!" << endl;
    }

}
