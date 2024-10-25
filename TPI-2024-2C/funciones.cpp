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

void solicitarNombres(string &nombre1, string &nombre2)
{
    char confirmar = 'N';
    while (toupper(confirmar) != 'S')
    {
        cout<<"Antes de comenzar a jugar deben registrar sus nombres:" << endl;
        cout<<endl<< "Primer jugador: ";
        cin>>nombre1;
        cout<<endl<<"Segundo jugador: ";
        cin>> nombre2;
        cout<<endl<<"¿Desea confirmar los nombres ingresados? (S/N): ";
        cin>> confirmar;
        cout<< "-------------------------------------------------------" << endl;
        cout<< endl;
    }

    cout<<"Nombres de los jugadores registrados: "<<nombre1<<" vs "<<nombre2<<endl;
}

void definirPrimerJugador(string nombre1, string  nombre2, string nombres[])
{
    cout<<endl<<"-------------------------------------------------------"<<endl<<endl;
    cout<<"Ahora solo nos resta definir que jugador comenzará, \npara eso debemos tirar un dado ¿Estas de acuero?"<<endl<<endl;
    system("pause");
    int dado = tirarDado();
    dibujarDado(dado);
    cout<<endl;
    if(dado%2==0)
    {
        cout<<"Toco un dado par, comenzará a jugar: "<<nombre1<<endl<<endl;
        nombres[0]=nombre1;
        nombres[1]=nombre2;
    }
    else
    {
        cout<<"Toco un dado impar, comenzará a jugar: "<<nombre2<<endl<<endl;
        nombres[0]=nombre2;
        nombres[1]=nombre1;
    }
    system("pause");
}

void jugar()
{
    system("cls");
    string nombre1, nombre2;
    string nombres[2];
    cout<< "                     BONZO"<<endl;
    cout<< "-------------------------------------------------------"<<endl;
    solicitarNombres(nombre1, nombre2);
    definirPrimerJugador(nombre1, nombre2, nombres);
}
