#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMenu>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalLayoutMain->setStretch(0, 4);
    ui->horizontalLayoutMain->setStretch(1, 1);
    statusBar()->showMessage(tr("Gotowy"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QMenu *MainWindow::filterMenu() const
{
    return ui->menuFiltr;
}

QVBoxLayout *MainWindow::toolsHostLayout() const
{
    return ui->verticalLayoutToolsHost;
}
