#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <iterator>
#include <set>
#include <QByteArray>
#include <QString>
#include <exception>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString readFile();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
