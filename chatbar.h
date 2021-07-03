#ifndef CHATBAR_H
#define CHATBAR_H

#include <QWidget>

namespace Ui {
class ChatBar;
}

class ChatBar : public QWidget
{
    Q_OBJECT

public:
    explicit ChatBar(QWidget *parent = nullptr);
    ~ChatBar();

private:
    Ui::ChatBar *ui;
};

#endif // CHATBAR_H
