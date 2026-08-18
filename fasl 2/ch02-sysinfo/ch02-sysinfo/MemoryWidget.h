#pragma once
#include "SysInfoWidget.h"
#include <QtCharts/QLineSeries>


class MemoryWidget :
    public SysInfoWidget
{
    Q_OBJECT
public:
    explicit MemoryWidget(QWidget* parent = 0);
protected slots:
    void updateSeries() override;
private:
    QLineSeries* mSeries;
    qint64 mPointPositionX;

};

