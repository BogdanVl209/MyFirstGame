#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game_demo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->action, &QAction::triggered, qApp, QApplication::quit);

    this->game1.enemy1->setClass(1);
    this->game1.enemy1->setArmor(50);
    this->game1.enemy1->setEndurance(20);
    this->game1.enemy1->setHitpoints(100);

    ui->label_5->setText(QString::number(this->game1.enemy1->getClass()));
    ui->label_6->setText(QString::number(this->game1.enemy1->getArmor()));
    ui->label_7->setText(QString::number(this->game1.enemy1->getEndurance()));
    ui->label_8->setText(QString::number(this->game1.enemy1->getHitpoints()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int _class = this->ui->spinBox->value();
    int armor = this->ui->spinBox_2->value();
    int endurance = this->ui->spinBox_3->value();
    int hitpoints = this->ui->spinBox_4->value();

    this->game1.main_hero->setClass(_class);
    this->game1.main_hero->setArmor(armor);
    this->game1.main_hero->setEndurance(endurance);
    this->game1.main_hero->setHitpoints(hitpoints);

}

void MainWindow::on_commandLinkButton_clicked()
{
    int result = this->game1.fight();
    switch (result) {
        case 1:
            ui->label_9->setText("Перемога");
            break;
        case 2:
            ui->label_9->setText("Поразка");
            break;
        case 0:
            ui->label_9->setText("Нічия");
            break;
        case -1:
            ui->label_9->setText("Помилка");
            break;
        default:
        ui->label_9->setText("Помилка");
            break;
    }
        ui->label_19->setNum(this->game1.Wins);
     ui->label_20->setNum(this->game1.Loss);
          ui->label_21->setNum(this->game1.Draw);
}

