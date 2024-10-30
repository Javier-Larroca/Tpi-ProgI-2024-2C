#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

void jugar(int rankingPuntos[], string rankingNombres[]);
void dibujarMono();
void comenzarJuego(string nombres[], int puntos[]);
void mostrarPuntosDeLaPartida(string nombres[], int puntos[]);
void recalcularPuntos(int puntos[], int cantBonzos[]); //Función que recalculara los puntos de cada jugador dependiendo de cuantos hitos se hayan cumplidos.
void definirGanador(string nombres[], int puntos[]); //Definira el ganador dependiendo de los puntos y cantidad de bonzos obtenidos.
bool dadosIguales(int dados[]); //Función que nos devolvera true en caso de haber un Bonzo Ve a Dormir.
int lanzarDados(int dados[], int cantDados); //Carga el vector de dados con nros aleatorios entre 1 y 6.
int contarRepeticionesDeNumeroProhibido(int numeroPrhibido, int dados[]); //Cuenta la cantidad de numeros prohibidos obtenidos en una tirada
void solicitarNombres(string &nombre1, string  &nombre2); //Solicita los nombres de ambos jugadores.
void definirPrimerJugador(string nombre1, string  nombre2, string nombres[]); //Define el jugador quecomenzara, ordenandolo de manera correspondiente en el vector de nombres.
void dibujarDado(int d); //Función que dibuja el valor de un dado recibido por parametro.
void dibujarTresDadosEnLinea(int dados[], int cantDados); //Función que dibuja en la misma linea 3 dados según los valores que reciba del vector.
void guardarPartidaEnRanking(string nombres[], int puntos[], int rankingPuntos[], string rankingNombres[]);
int tirarDado(); //Función que devuelve un valor entre el 1 y el 6.

#endif // FUNCIONES_H_INCLUDED
