/**
 * Copyright (C) 2020 UOS Technology Co., Ltd.
 *
 * to mark the desktop UI
 **/

#ifndef DESKTOP_ACCESSIBLE_OBJECT_LIST_H
#define DESKTOP_ACCESSIBLE_OBJECT_LIST_H

#include "accessiblefunctions.h"

#include <QDialog>
#include <QPushButton>
#include <QListWidget>
#include <DTitlebar>
#include <QFrame>
#include <QLabel>
#include <DMainWindow>
#include <QAction>

#include "../view/widget/titlebarwidget.h"
#include "../view/widget/infodialog.h"
#include "../view/widget/searchresult.h"
#include "../view/widget/closeconfirmdialog.h"
#include "../view/helper/widgethellper.h"
#include "../view/widget/dequalizerdialog.h"

#include "../view/importwidget.h"
#include "../view/playlistwidget.h"
#include "../view/musiclyricwidget.h"
#include "../view/footerwidget.h"
#include "../view/loadwidget.h"
#include "../view/musiclistwidget.h"


DWIDGET_USE_NAMESPACE
// 添加accessible
SET_FORM_ACCESSIBLE(QFrame, m_w->objectName())
SET_FORM_ACCESSIBLE(QWidget, m_w->objectName())
SET_LABEL_ACCESSIBLE(QLabel, m_w->objectName())
SET_FORM_ACCESSIBLE(QDialog, m_w->objectName())
SET_BUTTON_ACCESSIBLE(QPushButton, m_w->objectName())
SET_SLIDER_ACCESSIBLE(DMainWindow, m_w->objectName())
SET_SLIDER_ACCESSIBLE(QListWidget, m_w->objectName())
SET_FORM_ACCESSIBLE(DTitlebar, m_w->objectName())
SET_FORM_ACCESSIBLE(QMenu, m_w->objectName())

QAccessibleInterface *accessibleFactory(const QString &classname, QObject *object)
{
    QAccessibleInterface *interface = nullptr;
    USE_ACCESSIBLE(classname, QFrame);
    USE_ACCESSIBLE(classname, QWidget);
    USE_ACCESSIBLE(classname, QLabel);
    USE_ACCESSIBLE(classname, QDialog);
    USE_ACCESSIBLE(classname, QPushButton);
    USE_ACCESSIBLE(classname, DMainWindow);
    USE_ACCESSIBLE(classname, QListWidget);
    USE_ACCESSIBLE(classname, DTitlebar);
    USE_ACCESSIBLE(classname, QMenu);

    return interface;
}

#endif // DESKTOP_ACCESSIBLE_OBJECT_LIST_H
