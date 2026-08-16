#pragma once

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <qDebug>
#include <QVector>

#include "ui_todo.h"
#include "..\Task\Task.h"

class todo : public QMainWindow
{
    Q_OBJECT

public:
    todo(QWidget *parent = nullptr);
    ~todo();
    void updateStatus();

public slots:
    void addTask();
    void removeTask(Task* task);
    void taskStatusChanged(Task* task);

private:
    Ui::todoClass *ui;
    QVector<Task*> mTasks;
};
