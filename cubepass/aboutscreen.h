#ifndef ABOUTSCREEN_H
#define ABOUTSCREEN_H

#include "stdafx.h"

namespace Ui {
class AboutScreen;
}

class AboutScreen : public QDialog
{
	Q_OBJECT

public:
	explicit AboutScreen(QWidget *parent = 0);
	~AboutScreen();

private slots:
	void on_btnDonate_clicked();

private:
	Ui::AboutScreen *ui;
};

#endif // ABOUTSCREEN_H
