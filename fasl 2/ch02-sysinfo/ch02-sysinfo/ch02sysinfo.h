#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ch02sysinfo.h"
#include "CpuWidget.h"
#include "MemoryWidget.h"


class ch02sysinfo : public QMainWindow
{
    Q_OBJECT

public:
    ch02sysinfo(QWidget *parent = nullptr);
    ~ch02sysinfo();

private:
    Ui::ch02sysinfoClass *ui;
    CpuWidget mCpuWidget;
    MemoryWidget mMemoryWidget;

};
