#include "mainwindow.h"
#include <QApplication>
#include <QLocalSocket>

#include <string>
#include <iostream>

#include "searchif.h"
#include "searchifadaptor.h"
#include "queryservice.h"

using namespace std;

int main(int argc, char *argv[])
{
    // detect already running instance
    QLocalSocket socket;
    socket.connectToServer(serverName);
    if (socket.waitForConnected(500)) {
        cerr << "Already running. Terminating." << endl;
        return -1; // Exit already a process running
    }

    QApplication a(argc, argv);
    MainWindow w;

    QueryService* query = new QueryService(NULL, &w);
    new SearchIfAdaptor(query);

    QDBusConnection conn = QDBusConnection::sessionBus();
    bool ret = conn.registerService("com.zeal");
    if (!ret) {
        std::cout << "Failed to register dbus service!" << std::endl;
        return 1;
    }
    ret = conn.registerObject("/", query);
    if (!ret) {
        std::cout << "Failed to register object" << std::endl;
        return 1;
    }

    w.show();
    return a.exec();
}
