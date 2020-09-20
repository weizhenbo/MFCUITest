#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dengdaiUITest.h"
#include "QProgressIndicator.h"
#include <QPushButton>
#include <QLabel>


class dengdaiUITest : public QMainWindow
{
	Q_OBJECT

public:
	dengdaiUITest(QWidget *parent = Q_NULLPTR);

private:
	Ui::dengdaiUITestClass ui;
	QProgressIndicator *m_pIndicator;
	QPushButton *m_btn;
};
