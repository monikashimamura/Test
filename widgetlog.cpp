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
    //进入到选择注册中
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        this->hide();
        rgster->show();
    });
    //进入到选择聊天中
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        this->hide();
        chat->show();
    });
    connect(rgster,&WidgetRegister::toLog,this,[=](){
        rgster->hide();
        this->show();
    });

}

WidgetLog::~WidgetLog()
{
    delete ui;
}

