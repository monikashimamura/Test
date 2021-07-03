#ifndef WIDGETCHAT_H
#define WIDGETCHAT_H
//发送->发表日志
#include"widgetdailypublish.h"
#include <QWidget>

namespace Ui {
class WidgetChat;
}

class WidgetChat : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetChat(QWidget *parent = nullptr);
    ~WidgetChat();
    WidgetDailyPublish * dailyPublic =NULL;

private:
    Ui::WidgetChat *ui;
};

#endif // WIDGETCHAT_H
