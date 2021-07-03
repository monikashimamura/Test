#include "widgetnoticepublish.h"
#include "ui_widgetnoticepublish.h"
#include<QTimer>
WidgetNoticePublish::WidgetNoticePublish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetNoticePublish)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,720);
    //设置窗口标题
    setWindowTitle("公告发布");
    carPublish=new WidgetCarPublish;
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        //延时进入到选择注册中 自身隐藏
        QTimer::singleShot(500,this,[=](){
            carPublish->setGeometry(this->geometry());//每次切换场景都保持位置一致
            this->hide();/*自身隐藏*/
            carPublish->show();
        });
    });
}

WidgetNoticePublish::~WidgetNoticePublish()
{
    delete ui;
}
