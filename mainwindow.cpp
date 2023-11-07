#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cursor = 0;
    old_cursor = 0;

    object_select_state(cursor, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::object_select_state(uint8_t cursor, bool state)
{
    if(state == true)
    {
        switch(cursor){
        case 0:
            ui->pushButton->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 1:
            ui->pushButton_2->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 2:
            ui->pushButton_3->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 3:
            ui->pushButton_4->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 4:
            ui->pushButton_5->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 5:
            ui->pushButton_6->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 6:
            ui->pushButton_7->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 7:
            ui->pushButton_8->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        case 8:
            ui->pushButton_9->setStyleSheet("QPushButton{ color: red; border:1px solid red }");
            break;
        }
    }
    else
    {
        switch(cursor){
        case 0:
            ui->pushButton->setStyleSheet("");
            break;
        case 1:
            ui->pushButton_2->setStyleSheet("");
            break;
        case 2:
            ui->pushButton_3->setStyleSheet("");
            break;
        case 3:
            ui->pushButton_4->setStyleSheet("");
            break;
        case 4:
            ui->pushButton_5->setStyleSheet("");
            break;
        case 5:
            ui->pushButton_6->setStyleSheet("");
            break;
        case 6:
            ui->pushButton_7->setStyleSheet("");
            break;
        case 7:
            ui->pushButton_8->setStyleSheet("");
            break;
        case 8:
            ui->pushButton_9->setStyleSheet("");
            break;
        }
    }
}

void MainWindow::on_leftBtn_clicked()
{
    switch(cursor)
    {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        object_select_state(cursor, false);
        cursor -= 1;
        object_select_state(cursor, true);
        break;
    default:
        break;
    }
}

void MainWindow::on_rightBtn_clicked()
{
    switch(cursor)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        object_select_state(cursor, false);
        cursor += 1;
        object_select_state(cursor, true);
        break;
    case 8:
        break;
    default:
        break;
    }
}

void MainWindow::on_upBtn_clicked()
{
    switch(cursor)
    {
    case 0:
        break;
    case 1:
        object_select_state(cursor, false);
        cursor = 6;
        object_select_state(cursor, true);
        break;
    case 2:
        object_select_state(cursor, false);
        cursor = 7;
        object_select_state(cursor, true);
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        object_select_state(cursor, false);
        cursor -= 3;
        object_select_state(cursor, true);
        break;
    case 7:
        object_select_state(cursor, false);
        cursor -= 3;
        object_select_state(cursor, true);
        break;
    case 8:
        object_select_state(cursor, false);
        cursor -= 3;
        object_select_state(cursor, true);
        break;
    default:
        break;
    }
}

void MainWindow::on_downBtn_clicked()
{
    switch(cursor)
    {
    case 0:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 1:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 2:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 3:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 4:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 5:
        object_select_state(cursor, false);
        cursor += 3;
        object_select_state(cursor, true);
        break;
    case 6:
        object_select_state(cursor, false);
        cursor = 1;
        object_select_state(cursor, true);
        break;
    case 7:
        object_select_state(cursor, false);
        cursor = 2;
        object_select_state(cursor, true);
        break;
    case 8:
        break;
    default:
        break;
    }
}
