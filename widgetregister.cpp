#include "widgetregister.h"
#include "ui_widgetregister.h"
#include<QTimer>
WidgetRegister::WidgetRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetRegister)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(600,400);
    //设置窗口标题
    setWindowTitle("驴友故事--注册");
    //无论点击注册还是返回都是返回登录界面
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        emit toLog();
    });
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        emit toLog();
    });


}

WidgetRegister::~WidgetRegister()
{
    delete ui;
}
