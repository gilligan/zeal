/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c SearchIfAdaptor -a searchifadaptor.h:searchifadaptor.cpp com.zeal.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "searchifadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SearchIfAdaptor
 */

SearchIfAdaptor::SearchIfAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SearchIfAdaptor::~SearchIfAdaptor()
{
    // destructor
}

void SearchIfAdaptor::ping()
{
    // handle method call com.zeal.ping
    QMetaObject::invokeMethod(parent(), "ping");
}

void SearchIfAdaptor::search(const QString &name)
{
    // handle method call com.zeal.search
    QMetaObject::invokeMethod(parent(), "search", Q_ARG(QString, name));
}
