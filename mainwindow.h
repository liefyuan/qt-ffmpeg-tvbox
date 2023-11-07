#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void object_select_state(uint8_t cursor, bool state);

private slots:
    void on_leftBtn_clicked();

    void on_rightBtn_clicked();

    void on_upBtn_clicked();

    void on_downBtn_clicked();

private:
    Ui::MainWindow *ui;

    int8_t cursor;
    int8_t old_cursor;
};
#endif // MAINWINDOW_H
