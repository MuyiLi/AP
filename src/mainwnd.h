#ifndef MAINWND_H
#define MAINWND_H

#include <QtGui/QMainWindow>
#include "ui_mainwnd.h"

class MainWnd : public QMainWindow
{
	Q_OBJECT

public:
	MainWnd(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWnd();

private:
	Ui::MainWndClass ui;
};

#endif // MAINWND_H
