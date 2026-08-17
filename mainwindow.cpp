#include "mainwindow.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QListWidget>
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
    setWindowTitle("Come back when you're a little, mmmm, richer!");

    auto* centralWidget = new QWidget(this);
    auto* verticalLayout = new QVBoxLayout(centralWidget);
    auto* imageLabel = new QLabel(centralWidget);

    const QPixmap pixmap("../img/Morshu.png");
    m_text = new QString("You've got %1 Rupie");
    m_lineEdit = new QLineEdit(QString("You've got %1 Rupie").arg(m_clicksCount), this);
    m_button = new QPushButton("Get Richer", centralWidget);

    if (!pixmap.isNull())
    {
        imageLabel->setPixmap(pixmap);
        imageLabel->setAlignment(Qt::AlignCenter);
    }
    else
    {
        imageLabel->setText("Нет картинки");
    }

    verticalLayout->addWidget(imageLabel);
    verticalLayout->addWidget(m_lineEdit);
    verticalLayout->addWidget(m_button);

    setCentralWidget(centralWidget);

    connect(m_button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

void MainWindow::onButtonClicked()
{
    m_clicksCount++;
    m_lineEdit->setText(QString("You've got %1 %2")
                        .arg(m_clicksCount)
                        .arg(m_clicksCount == 1 ? "Rupie" : "Rupies"));

}
// void MainWindow::onButtonMsgBox()
// {
//     QMessageBox msgBox;
//     msgBox.setText("Widget");
//     msgBox.exec();
// }