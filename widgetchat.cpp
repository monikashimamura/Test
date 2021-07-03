#include "widgetchat.h"
#include "ui_widgetchat.h"
#include<QTimer>
#include<QDebug>
#include<QString>
WidgetChat::WidgetChat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetChat)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,600);
    //设置窗口标题
    //点击发送 进入选择日志的发布
    setWindowTitle("聊天");
    dailyPublic=new WidgetDailyPublish;
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        //延时进入到选择日志发布中 自身隐藏
        QTimer::singleShot(500,this,[=](){
            dailyPublic->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            dailyPublic->show();
        });
    });


}

WidgetChat::~WidgetChat()
{
    delete ui;
}
