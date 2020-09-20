#include "dengdaiUITest.h"


dengdaiUITest::dengdaiUITest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_btn = new QPushButton(this);
	m_btn->setText(QStringLiteral("�򿪵ȴ���ʾ"));
	QLabel *label = new QLabel(this);
	m_btn->setStyleSheet("background-color:white");
	setStyleSheet("background-color:black");
	m_btn->move(100, 100);
	QProgressIndicator *pIndicator = new QProgressIndicator(this);
	connect(m_btn, &QPushButton::clicked, this, [=]()
	{
		pIndicator->setColor(Qt::white);//���õȴ��ؼ���ɫ
		pIndicator->move(200, 200);
		pIndicator->startAnimation();//��ʼ���ж���
		label->setText(QStringLiteral("��Ŭ�������У����Ժ�"));
		label->setStyleSheet("color:rgb(200,100,0)");
		label->adjustSize();//�����ı���������Ӧ�ؼ���С
		label->move(210, 250);
	});
}
