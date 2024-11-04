#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

void comenzarJuego(string nombres[], int puntos[], int cantBonzos[], int cantLanzamientosExitosos[]); //Función donde comienza el juego.
int contarRepeticionesDeNumeroProhibido(int numeroPrhibido, int dados[]); //Cuenta la cantidad de numeros prohibidos obtenidos en una tirada
bool dadosIguales(int dados[]); //Función que nos devolvera true en caso de haber un Bonzo Ve a Dormir.
void definirGanador(string nombres[], int puntos[], int cantBonzos[], int cantLanzamientosExitosos[]); //Definira el ganador dependiendo de los puntos y cantidad de bonzos obtenidos.
void definirPrimerJugador(string nombre1, string nombre2, string nombres[]); //Define el jugador que comenzara, ordenandolo de manera correspondiente en el vector de nombres.
void dibujarDado(int d); //Función que dibuja el valor de un dado recibido por parametro.
void dibujarDadosEnLinea(int dados[], int cantDados); //Función que dibuja en la misma linea 3 dados según los valores que reciba del vector.
void guardarPartidaEnRanking(string nombres[], int puntos[], int rankingPuntos[], string rankingNombres[]);
void jugar(int rankingPuntos[], string rankingNombres[]); //Función llamada desde el main para la opción de jugar.
int lanzarDados(int dados[], int cantDados); //Carga el vector de dados con nros aleatorios entre 1 y 6.
void mostrarEstadisticas(string nombres[], int puntos[]); //Muestra las primeras 5 posiciones de los vectores de ranking.
void mostrarPuntosDeLaPartida(string nombres[], int puntos[], int cantBonzos[], int cantLanzamientosExitosos[]);
void ordenarRanking(string nombres[], int puntos[]); //Ordena los vectores de ranking
void recalcularPuntos(int puntos[], int cantBonzos[], int cantLanzamientosExitosos[]); //Función que recalculara los puntos de cada jugador dependiendo de cuantos hitos se hayan cumplidos.
void solicitarNombres(string &nombre1, string &nombre2); //Solicita los nombres de ambos jugadores.
int tirarDado(); //Función que devuelve un numero entre el 1 y el 6.

#endif // FUNCIONES_H_INCLUDED
