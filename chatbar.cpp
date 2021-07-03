#include "chatbar.h"
#include "ui_chatbar.h"

ChatBar::ChatBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatBar)
{
    ui->setupUi(this);
}

ChatBar::~ChatBar()
{
    delete ui;
}
