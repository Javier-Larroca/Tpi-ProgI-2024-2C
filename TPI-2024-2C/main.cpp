#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    srand (time(NULL));

//    int vec1[6] = {1, 2, 3, 4, 5, 6};
//    for(int x=0; x<6; x++)
//    {
//        dibujarDado(vec1[x]);
//    }
//
//    int vec2[3] = {3, 5, 2};
//    dibujarTresDadosEnLinea(vec2);

    int opc;

    while(true)
    {
        system("cls");
        cout << "      BONZO" << endl;
        cout << "-------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS" << endl;
        cout << "3 - CREDITOS" << endl;
        cout << "-------------------" << endl;
        cout << endl;
        cout << "0 - SALIR" << endl;
        cout << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            jugar();
            break;
        case 2:

            //estadisticas();
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
