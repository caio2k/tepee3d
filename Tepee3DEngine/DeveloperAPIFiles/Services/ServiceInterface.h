/****************************************************************************
**
** Copyright (C) Paul Lemire, Tepee3DTeam and/or its subsidiary(-ies).
** Contact: paul.lemire@epitech.eu
** Contact: tepee3d_2014@labeip.epitech.eu
**
** This file is part of the Tepee3D project
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
****************************************************************************/

#ifndef SERVICEINTERFACE_H
#define SERVICEINTERFACE_H

#include <QObject>
#include <QtPlugin>

// LIBRARIES OF SERVICES AVAILABLE FOR
// DATABASE
// WEBSERVICES
// LOCATION AND PLACES (opt)
// DEVICE SENSORS (opt)
// CAMERA (opt)

namespace Services
{

class ServiceInterface
{

public :
    virtual                     ~ServiceInterface()  {}
    virtual void                initLibraryConnection(QObject *parent) = 0;
    virtual bool                connectServiceToUser(QObject *user) = 0;
    virtual bool                disconnectServiceFromUser(QObject *user) = 0;
    virtual int                 getServiceId() const = 0;
    virtual QString             getServiceVersion() const = 0;
    virtual QObject*            getLibraryQObject() = 0;
};

}
Q_DECLARE_INTERFACE(Services::ServiceInterface, "com.tepee3d.Services.ServiceInterface/1.0")


#endif // SERVICEINTERFACE_H
