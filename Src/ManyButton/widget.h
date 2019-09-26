#ifndef WIDGET_H
#define WIDGET_H

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif
//���Qt��vs�����µ�������������

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

	void SetUI();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
