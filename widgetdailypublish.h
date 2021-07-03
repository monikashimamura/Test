#ifndef WIDGETDAILYPUBLISH_H
#define WIDGETDAILYPUBLISH_H
#include <QWidget>
//发表日志的提交->发表公告
#include"widgetnoticepublish.h"
#include"widgetcarpublish.h"
namespace Ui {
class WidgetDailyPublish;
}

class WidgetDailyPublish : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetDailyPublish(QWidget *parent = nullptr);
    ~WidgetDailyPublish();
    WidgetNoticePublish * noticePublish =NULL;
    WidgetCarPublish * carPublish=NULL;


private:
    Ui::WidgetDailyPublish *ui;
};

#endif // WIDGETDAILYPUBLISH_H
