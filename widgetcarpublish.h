#ifndef WIDGETCARPUBLISH_H
#define WIDGETCARPUBLISH_H

#include <QWidget>

namespace Ui {
class WidgetCarPublish;
}

class WidgetCarPublish : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetCarPublish(QWidget *parent = nullptr);
    ~WidgetCarPublish();

private:
    Ui::WidgetCarPublish *ui;
};

#endif // WIDGETCARPUBLISH_H
