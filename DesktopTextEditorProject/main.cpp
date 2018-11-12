#include "mainwindow.h"
#include <QApplication>
#include <filesystem>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <docTree.h>


int main(int argc, char *argv[])
{
    //wchar_t* p = L"C:/Users/Public/Documents";
    //path filePath(p);

    //filePath /= L"NewFile.txt";
/*
    std::vector<std::wstring> v = {};
    std::vector<std::wstring> rv = {};
    std::vector<std::wstring>* vPtr = &v;
    std::wstring rEmpty = L"";
    //std::wstring pathString = L"//?C://Users//Public";
    std::wstring pathString = L"C:\\Users\\Public";
    //docTree::getSubdirs(v, pathString);
    docTree::getSubdirsRecursive(v, pathString, rEmpty);
    int firstOut = v.size();
    */
    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    return app.exec();
}
