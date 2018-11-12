#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int v;
    std::string vString;
    const char* vSP;
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(onButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setV(int vIn)
{
    //vIn = v;
    vString = std::to_string(v);
    const char* vSP = &vString[0];
}

void MainWindow::onButtonClicked()
{
    ui->label->setText(tr(vSP));
    return;
}
