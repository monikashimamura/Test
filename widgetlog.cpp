#include "widgetlog.h"
#include "ui_widgetlog.h"
#include<QTimer>
#include<QTextEdit>
WidgetLog::WidgetLog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetLog)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(600,400);
    //设置窗口标题
    setWindowTitle("驴友故事");
    chat=new WidgetChat;
    rgster=new WidgetRegister;
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        //延时进入到选择注册中 自身隐藏
        QTimer::singleShot(500,this,[=](){
            rgster->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            rgster->show();
        });
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        //延时进入到选择聊天中 自身隐藏
        QTimer::singleShot(500,this,[=](){
            chat->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            chat->show();
        });
    });

}

WidgetLog::~WidgetLog()
{
    delete ui;
}

