#include "publish.h"
#include "ui_publish.h"
#include<QPushButton>
Publish::Publish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Publish)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,720);
    //设置窗口标题
    setWindowTitle("发布");
    connect(ui->pushButton_7,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pushButton_8,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pushButton_9,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });


}

Publish::~Publish()
{
    delete ui;
}
