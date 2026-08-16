#include "todo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    todo w;
    a.setStyleSheet(R"(

        /* Window & General Background */
        QMainWindow, QWidget#centralwidget, QDialog {
            background-color: #12141d;
            color: #e2e8f0;
            font-family: 'Segoe UI', 'Inter', -apple-system, sans-serif;
            font-size: 14px;
        }

        /* Header / Labels */
        QLabel {
            color: #f8fafc;
            font-weight: 600;
        }

        /* LineEdit (Input Fields) */
        QLineEdit {
            background-color: #1a1d2d;
            border: 2px solid #2e344e;
            border-radius: 10px;
            padding: 10px 14px;
            color: #ffffff;
            selection-background-color: #6366f1;
        }

        QLineEdit:focus {
            border: 2px solid #6366f1;
            background-color: #1e2238;
        }

        QLineEdit::placeholder {
            color: #64748b;
        }

        /* Primary Action Buttons (Add / Save) */
        QPushButton {
            background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #6366f1, stop:1 #8b5cf6);
            color: #ffffff;
            font-weight: 600;
            border: none;
            border-radius: 10px;
            padding: 10px 20px;
        }

        QPushButton:hover {
            background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #4f46e5, stop:1 #7c3aed);
        }

        QPushButton:pressed {
            background-color: #4338ca;
        }

        QPushButton:disabled {
            background-color: #334155;
            color: #94a3b8;
        }

        /* List Widget (Task Container) */
        QListWidget {
            background-color: #1a1d2d;
            border: 2px solid #2e344e;
            border-radius: 12px;
            padding: 8px;
            outline: 0;
            color: #f1f5f9;
        }

        QListWidget::item {
            background-color: #24293e;
            border-radius: 8px;
            padding: 10px 12px;
            margin-bottom: 6px;
            color: #f1f5f9;
        }

        QListWidget::item:hover {
            background-color: #2d334d;
            border: 1px solid #6366f1;
        }

        QListWidget::item:selected {
            background-color: #3b82f6;
            color: #ffffff;
            font-weight: 600;
        }

        /* Checkbox (Task Completion) */
        QCheckBox {
            spacing: 8px;
            color: #cbd5e1;
        }

        QCheckBox::indicator {
            width: 18px;
            height: 18px;
            border-radius: 5px;
            border: 2px solid #475569;
            background-color: #0f172a;
        }

        QCheckBox::indicator:hover {
            border-color: #6366f1;
        }

        QCheckBox::indicator:checked {
            background-color: #10b981;
            border-color: #10b981;
            image: url(:/icons/check.svg); /* Optional SVG check icon */
        }

        /* Custom Scrollbar */
        QScrollBar:vertical {
            border: none;
            background: #12141d;
            width: 8px;
            border-radius: 4px;
            margin: 0px;
        }

        QScrollBar::handle:vertical {
            background: #334155;
            min-height: 20px;
            border-radius: 4px;
        }

        QScrollBar::handle:vertical:hover {
            background: #6366f1;
        }

        QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
            height: 0px;
        }
    )");
    w.show();
    return a.exec();
}
