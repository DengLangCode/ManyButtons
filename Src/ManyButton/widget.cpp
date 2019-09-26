#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
	SetUI();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::SetUI()
{
	QGridLayout *grLayout = new QGridLayout();
	grLayout->setColumnStretch(1, 0);
	grLayout->setRowStretch(40, 0);


	QLabel *TempLabel = NULL;
	QLineEdit *TempLineEdit = NULL;


// 	TempLabel = new QLabel("±êÇ©1");
// 	TempLabel->setFixedWidth(70);
// 	grLayout->addWidget(TempLabel);
// 	TempLineEdit= new QLineEdit("ÐÐ±à¼­Æ÷1");
// 	TempLineEdit->setEnabled(false);
// 	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©1");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷1");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©2");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷2");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©3");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷3");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©4");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷4");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©5");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷5");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©6");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷6");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©7");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷7");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©8");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷8");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©9");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷9");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("±êÇ©10");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("ÐÐ±à¼­Æ÷10");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);


	


	setLayout(grLayout);


}