#include "todo.h"
#include <QInputDialog>

todo::todo(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::todoClass),
    mTasks()

{
    ui->setupUi(this);
    //connect(ui.addTaskButton, &QPushButton::clicked, QApplication::instance(), &QApplication::quit);
    connect(ui->addTaskButton, &QPushButton::clicked, this, &todo::addTask);
    updateStatus();
}

todo::~todo()
{
    delete ui;
}

void todo::addTask() {
    qDebug() << "Adding new Task!";
    bool ok;

    /* Task* task = new Task("Untitled task");
     mTasks.append(task);
     ui->tasksLayout->addWidget(task);*/

    QString name = QInputDialog::getText(this,
        tr("Add task"),
        tr("Task name"),
        QLineEdit::Normal,
        tr("Untitled task"), &ok);

    if (ok && !name.isEmpty()) {
        qDebug() << "Adding new task";
        Task* task = new Task(name);
        mTasks.append(task);
        ui->tasksLayout->addWidget(task);
        connect(task, &Task::removed, this, &todo::removeTask);
        updateStatus();
    }
}

void todo::removeTask(Task* task) {
    mTasks.removeOne(task);
    ui->tasksLayout->removeWidget(task);
    delete task;
    updateStatus();

}

void todo::taskStatusChanged(Task* task) {
    updateStatus();
}

void todo::updateStatus() {

    int completedCount = 0;
    for (auto t : mTasks) {
        if (t->isCompleted()) {
            completedCount++;
        }
    }
    int todoCount = mTasks.size() - completedCount;
    ui->statusLabel->setText(QString("Status: %1 todo / %2 completed").arg(todoCount).arg(completedCount));
}