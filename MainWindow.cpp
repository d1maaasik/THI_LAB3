#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    // Подключаем кнопку к слоту
    connect(ui->btnAddFlower, &QPushButton::clicked, 
            this, &MainWindow::onAddFlowerClicked);
    
    // Инициализация тестовых данных
    currentBouquet.addFlower(std::make_shared<DutchTulip>("Sunny", 25.5, 3.75));
    currentBouquet.addFlower(std::make_shared<GardenRose>("Red Queen", 30, 5.0));
    
    updateFlowersList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAddFlowerClicked()
{
    // Добавление нового цветка (пример)
    auto flower = std::make_shared<DutchTulip>("New Tulip", 20.0, 4.0);
    currentBouquet.addFlower(flower);
    updateFlowersList();
}

void MainWindow::updateFlowersList()
{
    ui->listFlowers->clear();
    for (const auto& flower : currentBouquet.getFlowers()) {
        QString info = QString("%1 (%2 cm, $%3)")
            .arg(flower->getName())
            .arg(flower->getLength())
            .arg(flower->getPrice());
        ui->listFlowers->addItem(info);
    }
}