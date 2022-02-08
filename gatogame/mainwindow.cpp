#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonOK, SIGNAL(clicked()), this, SLOT(ok_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ok_clicked(){
    QString arr[3][3];  // declarado aquí para evitar dolor de cabeza. los chars no son asignables
     loop(arr);


    //verifica la seleción de radiobutton
    if(ui->radioButtonX->isChecked()){
        setUserXO("X");
    }else if (ui->radioButtonO->isChecked()) {
        setUserXO("O");
    }


}

void MainWindow::loop(QString arr[3][3]){
    Intro_Primera(arr);
    Intro_loop(arr);
}

//llena los labels con numeros del 1 al 9
void MainWindow::Intro_Primera(QString arr[3][3]){
    int numero_casilla= 0;

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            numero_casilla++;

            arr[i][j] = QString::number(numero_casilla);

            if(numero_casilla == 1){
                ui->label_casilla_1->setText(QString::number(numero_casilla));
            }
        }
    }
}

void MainWindow::Intro_loop(QString arr[3][3]){
    int aux;
    int i, j, k;

    do{
        do{
            qDebug() << "Coloca una ficha:";
            QTextStream qtin(stdin);
            QString tmp = qtin.readLine();
            aux = tmp.toInt();

        }while(aux < 1 || aux > 9);

        k = 0;
        switch(aux){
        case 1:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 2:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 3:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 4:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 5:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 6:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 7:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 8:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        case 9:{
            i = 0; j = 0;
            if( arr[i][j] == "X" || arr[i][j] == "O"){
                k = 1;
                qDebug() << "¡Casilla ocupada!";
            }
            break;
        }
        default:{
            break;
        }

        }

    }while(k == 1);

    arr[i][j] = "X";

}

void MainWindow::mousePressEvent(QMouseEvent *event){

}
