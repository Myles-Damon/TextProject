#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setV(int);

public slots:
    void onButtonClicked();

private:
    Ui::MainWindow *ui;
    std::vector<std::wstring> p;
    int v;
    std::string vString;
    const char* vSP;
};



#endif // MAINWINDOW_H
