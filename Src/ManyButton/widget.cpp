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


// 	TempLabel = new QLabel("��ǩ1");
// 	TempLabel->setFixedWidth(70);
// 	grLayout->addWidget(TempLabel);
// 	TempLineEdit= new QLineEdit("�б༭��1");
// 	TempLineEdit->setEnabled(false);
// 	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ1");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��1");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ2");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��2");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ3");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��3");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ4");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��4");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ5");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��5");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ6");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��6");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ7");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��7");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ8");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��8");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ9");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��9");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);
	TempLabel = new QLabel("��ǩ10");	TempLabel->setFixedWidth(70);	grLayout->addWidget(TempLabel);		TempLineEdit = new QLineEdit("�б༭��10");	TempLineEdit->setEnabled(false);	grLayout->addWidget(TempLineEdit);


	


	setLayout(grLayout);


}