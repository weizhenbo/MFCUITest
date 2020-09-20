#include "dengdaiUITest.h"


dengdaiUITest::dengdaiUITest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_btn = new QPushButton(this);
	m_btn->setText(QStringLiteral("打开等待演示"));
	QLabel *label = new QLabel(this);
	m_btn->setStyleSheet("background-color:white");
	setStyleSheet("background-color:black");
	m_btn->move(100, 100);
	QProgressIndicator *pIndicator = new QProgressIndicator(this);
	connect(m_btn, &QPushButton::clicked, this, [=]()
	{
		pIndicator->setColor(Qt::white);//设置等待控件颜色
		pIndicator->move(200, 200);
		pIndicator->startAnimation();//开始运行动画
		label->setText(QStringLiteral("正努力加载中，请稍后！"));
		label->setStyleSheet("color:rgb(200,100,0)");
		label->adjustSize();//根据文本内容自适应控件大小
		label->move(210, 250);
	});
}
