#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

void jugar();
void comenzarJuego(string nombres[], int puntos[]);
int lanzarDados(int dados[]);
int contarRepeticionesDeNumeroProhibido(int numeroPrhibido, int dados[]);
void solicitarNombres(string &nombre1, string  &nombre2);
void definirPrimerJugador(string nombre1, string  nombre2, string nombres[]);
void dibujarDado(int d); //Función que dibuja el valor de un dado recibido por parametro.
void dibujarTresDadosEnLinea(int dados[]); //Función que dibuja en la misma linea 3 dados según los valores que reciba del vector.
int tirarDado(); //Función que devuelve un valor entre el 1 y el 6.

#endif // FUNCIONES_H_INCLUDED
