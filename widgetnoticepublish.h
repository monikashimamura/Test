#ifndef WIDGETNOTICEPUBLISH_H
#define WIDGETNOTICEPUBLISH_H
#include"widgetcarpublish.h"
#include <QWidget>
//发表公告的提交->发表约车
namespace Ui {
class WidgetNoticePublish;
}

class WidgetNoticePublish : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetNoticePublish(QWidget *parent = nullptr);
    ~WidgetNoticePublish();
    WidgetCarPublish * carPublish=NULL;


private:
    Ui::WidgetNoticePublish *ui;
};

#endif // WIDGETNOTICEPUBLISH_H
