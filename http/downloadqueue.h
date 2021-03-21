#ifndef DOWNLOADQUEUE_H
#define DOWNLOADQUEUE_H

#include <QWidget>
#include <QListWidgetItem>
#include "../downloadwidget.h"
#include "../listwidgetui.h"

namespace Ui {
class DownloadQueue;
}

class DownloadQueue : public QWidget
{
    Q_OBJECT

public:
    explicit DownloadQueue(QWidget *parent = nullptr);
    void setSize(int w,int h);
    int getWidth();
    int getHeight();
    ~DownloadQueue();
private:
    Ui::DownloadQueue *ui;
    QListWidgetItem *item;
};

#endif // DOWNLOADQUEUE_H
