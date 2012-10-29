#include "PluginBase.h"
//DEBUG
#include <QDebug>

Plugins::PluginBase::PluginBase()
{
    qDebug() << "NEW PLUGINBASE INSTANCE CREATED ";
}

Plugins::PluginBase* Plugins::PluginBase::getPluginBase()
{
    return this;
}

void    Plugins::PluginBase::resultFromSQL()
{
    qDebug() << "PLUGIN BASE RESULT FROM SQL";
}

void    Plugins::PluginBase::executeHttpGetRequest(const QNetworkRequest &request)
{
    emit execHttpRequest(request, GET, NULL, this);
}

void    Plugins::PluginBase::executeHttpDeleteRequest(const QNetworkRequest &request)
{
    emit execHttpRequest(request, DELETE, NULL, this);
}

void    Plugins::PluginBase::executeHttpPostRequest(const QNetworkRequest &request, QHttpMultiPart* multiPart)
{
    emit execHttpRequest(request, POST, multiPart, this);
}

void    Plugins::PluginBase::executeHttpPutRequest(const QNetworkRequest &request, QHttpMultiPart* multiPart)
{
    emit execHttpRequest(request, PUT, multiPart, this);
}

