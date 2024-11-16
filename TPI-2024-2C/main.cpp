#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL));

    int opc, rankingPuntos[7]={};
    string rankingNombres[7]={};

    while(true)
    {
        system("cls");
        cout << "      BONZO" << endl;
        cout << "-------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS" << endl;
        cout << "3 - CREDITOS" << endl;
        cout << "-------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout<<endl<<"    Opción: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            jugar(rankingPuntos, rankingNombres);
            break;
        case 2:
            mostrarEstadisticas(rankingNombres, rankingPuntos);
            break;
        case 3:
            //creditos();
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    return 0;
}
