#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Bouquet.h"
#include "DutchTulip.h"
#include "GardenRose.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddFlowerClicked();  // Слот для кнопки

private:
    Ui::MainWindow *ui;
    Bouquet currentBouquet;
    
    void updateFlowersList();  // Обновление списка цветов
};
#endif // MAINWINDOW_H