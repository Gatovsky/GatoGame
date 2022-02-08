#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QtDebug>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void loop(QString arr[3][3]);
    void Intro_Primera(QString [3][3]);
    void Intro_loop(QString arr[3][3]);

    void setX(QString x){
        this->x = x;
    }
    QString getX(){
        return this->x;
    }
    void setO(QString o){
        this->o = o;
    }
    QString getO(){
        return this->o;
    }
    void setUserXO(QString userXO){
        this->userXO = userXO;
    }
    QString getUserXO(){
        return this->userXO;
    }


private slots:
    void ok_clicked();


   //void on_pushButtonOK_clicked();

protected:
     void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;

    QString x;
    QString o;
    QString userXO;

};

#endif // MAINWINDOW_H
