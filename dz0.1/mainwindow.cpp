#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->label->setText(readFile());
}

QString MainWindow::readFile(){
  std::ifstream file("C:\\Users\\elise\\Documents\\dz_01\\file.txt");
    QString date;
    if (!file.is_open())
      return "0";
    std::multiset<char> data{std::istream_iterator<char>(file), std::istream_iterator<char>{}};
    file.close();
    std::multiset<char> :: iterator it = data.begin();
    for (int i = 1;it!=data.end();i++,it++) {
       date+=*it;
    }
    qDebug()<<date;
        return date;
}

MainWindow::~MainWindow()
{
    delete ui;
}

