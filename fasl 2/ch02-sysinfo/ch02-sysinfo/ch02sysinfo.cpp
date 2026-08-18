#include "ch02sysinfo.h"
#include "SysInfo.h"
#include <QHBoxLayout>

ch02sysinfo::ch02sysinfo(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::ch02sysinfoClass),
    mCpuWidget(this),
    mMemoryWidget(this)

{
    ui->setupUi(this);
    ui->centralWidget->setLayout(new QHBoxLayout());
    ui->centralWidget->layout()->addWidget(&mCpuWidget);
    ui->centralWidget->layout()->addWidget(&mMemoryWidget);

}

ch02sysinfo::~ch02sysinfo()
{}
