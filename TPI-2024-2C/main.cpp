#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL));

    int opc, rankingPuntos[7]= {};
    char confirmar = 'C';
    string rankingNombres[7]= {};

    while(true)
    {
        system("cls");
        cout << " 88\"\"Yb  dP\"Yb  88b 88 8888P  dP\"Yb" << endl;
        cout << " 88__dP dP   Yb 88Yb88   dP  dP   Yb" << endl;
        cout << " 88\"\"Yb Yb   dP 88 Y88  dP   Yb   dP" << endl;
        cout << " 88oodP  YbodP  88  Y8 d8888  YbodP" << endl;

        cout << "------------------------------------" << endl;
        cout << "          1 - JUGAR" << endl;
        cout << "          2 - ESTADISTICAS" << endl;
        cout << "          3 - CREDITOS" << endl;
        cout << "------------------------------------" << endl;
        cout << "          0 - SALIR" << endl;
        cout<<endl<<"          Opción: ";
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
            creditos();
            break;
        case 0:
            cout<<endl<<" ¿Esta seguro que desea salir del juego? (S/N): ";
            cin>>confirmar;
            while(toupper(confirmar)!='N' && toupper(confirmar)!='S')
            {
                cout<<endl<<" Opción ingresada incorrecta. (S/N): ";
                cin>>confirmar;
            }
            if(toupper(confirmar)=='S')
            {
                cout<<endl<<"    ¡Muchas gracias por haber jugado BONZO! "<<endl;
                return 0;
            }
            confirmar = 'C';
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    return 0;
}
