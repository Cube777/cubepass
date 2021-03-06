#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "stdafx.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_btnCreateItem_clicked();
	void on_cmbCategory_currentIndexChanged(int index);
	void on_lstItems_itemDoubleClicked(QListWidgetItem *item);
	void on_btnManageCt_clicked();
	void on_actionLogout_triggered();
	void on_actionDelete_this_account_triggered();
	void on_actionBackup_this_profile_triggered();
	void on_actionRestore_a_profile_triggered();
	void on_actionChange_profile_password_triggered();
	void on_actionDonate_triggered();
	void on_actionAbout_triggered();
	void on_actionHelp_triggered();

private:
	Ui::MainWindow *ui;
	std::string _username;
	std::string _password;
	inip::iniParser _iniFile;
	nihdb::dataBase _datFile;
	QLabel *_statusText;

	void ReLogin();
	void UpdateCategories();
	void UpdateItems();
};

#endif // MAINWINDOW_H
