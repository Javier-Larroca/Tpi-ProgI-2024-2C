#include <iostream>
#include "funciones.h"

using namespace std;

void dibujarDado(int d)
{
    cout<<"+-------+"<<endl;
    switch (d)
    {
    case 1:
        cout<<"|       |"<<endl;
        cout<<"|   O   |"<<endl;
        cout<<"|       |"<<endl;
        break;
    case 2:
        cout<<"| O     |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"|     O |"<<endl;
        break;
    case 3:
        cout<<"| O     |"<<endl;
        cout<<"|   O   |"<<endl;
        cout<<"|     O |"<<endl;
        break;
    case 4:
        cout<<"| O   O |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"| O   O |"<<endl;
        break;
    case 5:
        cout<<"| O   O |"<<endl;
        cout<<"|   O   |"<<endl;
        cout<<"| O   O |"<<endl;
        break;
    case 6:
        cout<<"| O   O |"<<endl;
        cout<<"| O   O |"<<endl;
        cout<<"| O   O |"<<endl;
        break;
    }
    cout<<"+-------+"<<endl;
}

void dibujarTresDadosEnLinea(int dados[])
{
    string linea2 = "", linea3 = "", linea4 = "";

    cout<<"+-------+ +-------+ +-------+"<<endl;

    for(int x=0; x<3; x++)
    {
        switch (dados[x])
        {
        case 1:
            linea2+="|       | ";
            linea3+="|   O   | ";
            linea4+="|       | ";
            break;
        case 2:
            linea2+="| O     | ";
            linea3+="|       | ";
            linea4+="|     O | ";
            break;
        case 3:
            linea2+="| O     | ";
            linea3+="|   O   | ";
            linea4+="|     O | ";
            break;
        case 4:
            linea2+="| O   O | ";
            linea3+="|       | ";
            linea4+="| O   O | ";
            break;
        case 5:
            linea2+="| O   O | ";
            linea3+="|   O   | ";
            linea4+="| O   O | ";
            break;
        case 6:
            linea2+="| O   O | ";
            linea3+="| O   O | ";
            linea4+="| O   O | ";
            break;
        }
    }
    cout<<linea2<<endl;
    cout<<linea3<<endl;
    cout<<linea4<<endl;;
    cout<<"+-------+ +-------+ +-------+"<<endl;
}

int tirarDado()
{
    return rand()%6+1;
}
