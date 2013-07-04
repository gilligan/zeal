#include <QObject>
#include "mainwindow.h"

class QueryService : public QObject
{
Q_OBJECT
public:
    explicit QueryService(QObject *parent = 0, MainWindow *m = 0);
private:
    MainWindow* mainWindow;

public Q_SLOTS:
    void ping();
    void search(const QString &name);
Q_SIGNALS:

};
