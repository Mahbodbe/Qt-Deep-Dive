#include "ch02sysinfo.h"
#include <QtWidgets/QApplication>
#include "SysInfo.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(R"(
        QWidget {
            background-color: #0F172A;
            color: #F8FAFC;
            font-family: 'Segoe UI', Tahoma, sans-serif;
            font-size: 13px;
        }

        QFrame, QGroupBox {
            background-color: #1E293B;
            border: 1px solid #334155;
            border-radius: 12px;
            padding: 12px;
        }

        QPushButton {
            background-color: #2563EB;
            color: #FFFFFF;
            border: none;
            border-radius: 8px;
            padding: 8px 18px;
            font-weight: 600;
        }
        QPushButton:hover {
            background-color: #3B82F6;
        }
        QPushButton:pressed {
            background-color: #1D4ED8;
        }


        QProgressBar {
            border: none;
            background-color: #334155;
            border-radius: 6px;
            text-align: center;
            color: #FFFFFF;
            font-weight: bold;
        }
        QProgressBar::chunk {
            background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #3B82F6, stop:1 #06B6D4);
            border-radius: 6px;
    })");
    SysInfo::instance().init();
    ch02sysinfo w;
    w.show();
    return a.exec();
}
