#pragma once

#include <QtWidgets/QMainWindow>
#include <QInputDialog>

#include "ui_Task.h"

namespace Ui {
    class TaskClass;
}

class Task : public QMainWindow
{
    Q_OBJECT

public:
    explicit Task(const QString& name, QWidget* parent = 0);
    ~Task();
    void setName(const QString& name);
    QString name() const;
    bool isCompleted() const;

public slots:
    void rename();
    void checked(bool checked);
signals:
    void statusChanged(Task* task);
    void removed(Task* task);



private:
    Ui::TaskClass* ui;
};
