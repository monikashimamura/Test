#include "widgetdailypublish.h"
#include "ui_widgetdailypublish.h"
#include<QTimer>
WidgetDailyPublish::WidgetDailyPublish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetDailyPublish)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,720);
    //设置窗口标题
    setWindowTitle("日志发布");
    noticePublish=new WidgetNoticePublish;
    carPublish=new WidgetCarPublish;
    connect(ui->pushButton_8,&QPushButton::clicked,[=](){
        //延时进入到选择发表公告中 自身隐藏
        QTimer::singleShot(100,this,[=](){
            noticePublish->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            noticePublish->show();
        });
    });
    connect(ui->pushButton_9,&QPushButton::clicked,[=](){
        //延时进入到选择发表约车中 自身隐藏
        QTimer::singleShot(100,this,[=](){
            noticePublish->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            noticePublish->show();
        });
    });
}

WidgetDailyPublish::~WidgetDailyPublish()
{
    delete ui;
}
