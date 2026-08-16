#include "todo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    todo w;
    w.show();
    return a.exec();
}
