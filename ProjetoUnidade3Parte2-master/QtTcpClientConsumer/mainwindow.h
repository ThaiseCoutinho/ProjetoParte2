#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <vector>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
    /**
     * @brief tempo armazena o valor do tempo selecionado no slider
     */
    int tempo = 1;
public:
   vector<float> tempoNorm;
   vector <float> valorNorm;
  explicit MainWindow(QWidget *parent = 0);
   void timerEvent(QTimerEvent *event);
   /**
    * @brief timerId armazena o identificador retornado pela função startTimer()
    */
   int timerId;
   /**
    * @brief flag controla a função do botão Start/Stop
    */
   bool flag = true;

   void getData();

  ~MainWindow();

  
public slots:

  void getHost();
  void tcpConnect();
  void tcpDisconnect();
  void mudaTempo(int _tempo);
  void timerControl();

signals:
    vector <float> emiteDados(vector<float>, vector<float>);

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
