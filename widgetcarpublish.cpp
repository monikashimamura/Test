#include "widgetcarpublish.h"
#include "ui_widgetcarpublish.h"

WidgetCarPublish::WidgetCarPublish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetCarPublish)
{
    ui->setupUi(this);
    //设置固定窗口大小
    setFixedSize(800,720);
    //设置窗口标题
    setWindowTitle("约车发布");
}

WidgetCarPublish::~WidgetCarPublish()
{
    delete ui;
}
