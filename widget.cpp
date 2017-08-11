#include "widget.h"
#include "ui_widget.h"
#include "keyboard.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Keyboard *keyboard = Keyboard::getInstance();
    ui->lineEdit->installEventFilter(this);
    connect(ui->lineEdit, SIGNAL(selectionChanged()), keyboard, SLOT(run_keyboard_lineEdit()));
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->lineEdit)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            emit ui->lineEdit->selectionChanged();
        }
    }

    return QWidget::eventFilter(watched, event);
}
