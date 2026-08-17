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
    explicit MainWindow(QWidget* parent = nullptr);

private slots:
    void onButtonClicked();
    void newFile();
    void openFileDialog();
private:
    void createActions();
    void createMenus();

    QMenu* fileMenu;
    QMenu* editMenu;

    QAction* openAction;
    QAction* exitAction;
    QAction* fooAction;

    QPushButton* m_button;
    QPushButton* m_buttonMsgBox;

    QString m_selectedFilePath;
    QLabel* m_label{};
    QLineEdit* m_lineEdit;
    QString* m_text;

    int m_clicksCount{0};
};
