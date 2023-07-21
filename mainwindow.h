#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "game_demo.h"

#include <QMainWindow>
//#include "hero.h"
#include "game_demo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Hero hero1;
    game_demo game1;


private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
