#ifndef WIDGETREGISTER_H
#define WIDGETREGISTER_H
//注册或者返回 均是返回到登录界面
#include <QWidget>
namespace Ui {
class WidgetRegister;
}

class WidgetRegister : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetRegister(QWidget *parent = nullptr);
    ~WidgetRegister();
signals:
    //写一个自定义信号，告诉主场景 点击了返回
    void backFromRegiter() const;

private:
    Ui::WidgetRegister *ui;
};

#endif // WIDGETREGISTER_H
