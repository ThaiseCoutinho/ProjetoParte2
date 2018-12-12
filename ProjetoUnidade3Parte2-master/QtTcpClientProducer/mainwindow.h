#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
    /**
     * @brief tempo armazena o valor do tempo que é selecionado no slider
     */
    int tempo = 1;


public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
    /**
   * @brief timerEvent controla o intervalo de tempo que a função putData() deve ser executada

   * @param event
   */
  void timerEvent(QTimerEvent *event);
  /**
   * @brief timerId armazena o id ou identificador retornado pela função startTimer()
   */
  int timerId;
  /**
   * @brief flag controla a função do botão Start/Stop
   */

  bool flag = true;
  /**
   * @brief putData manda os dados para o servidor
   */

  void putData();


public slots:

  /**
   * @brief timerControl controla o envio de dados ao servidor
   */
  void timerControl();
  /**
   * @brief tcpConnect faz conexão TCP entre o cliente produtor de dados e o servidor
   */

  void tcpConnect();
  /**
   * @brief tcpDisconnect faz a desconexão TCP entre cliente produtor de dados e o servidor
   */

  void tcpDisconnect();
  /**
   * @brief mudaMax impede que o slider MAX tenha o valor menos que o slide MIN

   */

  void mudaMax();
  /**
   * @brief mudaMin impede que o slider MIN tenha o valor menos que o slide MAX
   */
  void mudaMin();
  /**
   * @brief mudaTempo guarda o valor do slide na variável tempo e reinicia o temporizador
   * @param _tempo tempo armazena o valor de tempo selecionado no slide.
   */

  void mudaTempo(int _tempo);

private:
  /**
   * @brief ui acessa a lista de objetos visuais
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket estabelece a conexão entre servidor e cliente
   */
  QTcpSocket *socket;

};

#endif // MAINWINDOW_H
