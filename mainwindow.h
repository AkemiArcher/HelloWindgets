#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QLineEdit>
class QPushButton;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void onButtonClicked(); // Метод-обработчик
    // void onButtonMsgBox(); // Метод-обработчик
private:
    QPushButton *m_button;
    QPushButton *m_buttonMsgBox;
    QLabel *m_label{};
    QLineEdit *m_lineEdit;
    QString *m_text;
    int m_clicksCount{0};
};