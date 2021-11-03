#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>      //그림 파일 추가하는 헤더
#include "dialog.h"     //두번째 화면 헤더파일 추가

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
//    QPixmap pix("/Users/gideo/Desktop/21-2/programming II/팀플/이미지파일/전체배경.png");
//    ui -> label -> setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//버튼 클릭 시 새로운 창 뜸
void MainWindow::on_pushButton_clicked()
{
    QDialog dialog;
    dialog.setModal(true);
    dialog.exec();

}

