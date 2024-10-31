#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <windows.h>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    srand (time(NULL));
    //SetConsoleOutputCP(CP_WINANSI);

    int opc, rankingPuntos[5]={};
    string rankingNombres[5]={};

    while(true)
    {
        system("cls");
        //dibujarMono();
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
