#include <QObject>
#include <iostream>
#include "queryservice.h"

QueryService::QueryService(QObject *parent, MainWindow* m)
{
    mainWindow = m;
}

void QueryService::ping()
{
    std::cout << "bye bye" << std::endl;
}

void QueryService::search(const QString &str)
{
    std::cout << "Hello " << str.toStdString() << std::endl;
    mainWindow->bringToFrontAndSearch(str);
}
