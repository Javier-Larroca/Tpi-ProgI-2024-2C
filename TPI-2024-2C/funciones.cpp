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

void dibujarTresDadosEnLinea(int dados[], int cantDados)
{
    string linea1 = " ", linea2 = " ", linea3 = " ", linea4 = " ";

    for(int x=0; x<cantDados; x++)
    {
        linea1+="+-------+ ";
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
    cout<<endl;
    cout<<linea1<<endl;
    cout<<linea2<<endl;
    cout<<linea3<<endl;
    cout<<linea4<<endl;;
    cout<<linea1<<endl; //Se repite la misma linea que abre los dados para que los cierre.
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
    cout<<endl;
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

int lanzarDados(int dados[], int cantDados)
{
    int sumaDeDados = 0;
    for(int x=0; x<cantDados; x++)
    {
        dados[x]= tirarDado();
        sumaDeDados += dados[x];
    }

    return sumaDeDados;
}

int contarRepeticionesDeNumeroProhibido(int numeroPrhibido, int dados[])
{
    int cont= 0;
    for (int x=0; x<3; x++)
    {
        if(numeroPrhibido == dados[x])
        {
            cont ++;
        }
    }

    return cont;
}
void comenzarJuego(string nombres[], int puntos[])
{
    int dados[3] = {}, puntosPorRonda[2], puntosPorLanzada, cantDados[2] = {3, 3};
    char confirmar;
    for(int ronda = 1; ronda<=6; ronda++)
    {
        for(int x=0; x<2; x++)
        {
            system("cls");
            cout<<endl<<"[[[[[[[[[[[[[[[[[ RONDA: "<<ronda<<" ]]]]]]]]]]]]]]]]]";
            confirmar = 'S';
            puntosPorRonda[x] = 0;
            cout<<endl<<"  -----------------------------------------" <<endl<<endl;
            cout<<"          -- Turno de: "<<nombres[x]<<" --"<<endl;
            cout<<"         -- Puntos al momento: "<<puntosPorRonda[x]<<" --"<<endl;
            cout<<"      -- Cantidad de dados disponibles: "<<cantDados[x]<<" --"<<endl<<endl;
            while(toupper(confirmar) != 'N')
            {
                puntosPorLanzada = lanzarDados(dados, cantDados[x]);
                puntosPorRonda[x] += puntosPorLanzada;
                dibujarTresDadosEnLinea(dados, cantDados[x]);

                switch(contarRepeticionesDeNumeroProhibido(ronda, dados))
                {
                case 0:
                    cout<<endl<<" Se obtuvieron "<<puntosPorLanzada<<" puntos en esta tirada"<<endl;
                    cout<<" Puntos acumulados al momento: "<<puntosPorRonda[x]<<endl;
                    cout<<endl<<" ¿Desea lanzar los dados una vez más? (S/N) ";
                    cin>>confirmar;
                    break;
                case 1:
                    cout<<endl<<"           ¡Obtuviste 1 número prohibido! \n Perdes el turno y tus puntos acumulados en esta ronda."<<endl;
                    puntosPorRonda[x] = 0;
                    confirmar = 'N';
                    system("pause");
                    break;
                case 2:
                    cout<<endl<<"        ¡Obtuviste 2 números prohibidos! \n Perdes el turno y tus puntos acumulados en esta ronda, la próxima ronda solo tendrás 2 dados."<<endl;
                    puntosPorRonda[x] = 0;
                    confirmar = 'N';
                    cantDados[x]=2;
                    system("pause");
                    break;
                case 3:
                    break;
                }
            }
            puntos[x]+=puntosPorRonda[x];
        }
        cout<<endl<<endl<<" -- Puntajes obtenidos en la ronda "<<ronda<<" -- "<<endl;
        cout<<"         - "<<nombres[0]<<": "<<puntosPorRonda[0]<<" -   "<<endl;
        cout<<"         - "<<nombres[1]<<": "<<puntosPorRonda[1]<<" -   "<<endl<<endl;
        system("pause");
        system("cls");
    }
}

void jugar()
{
    string nombre1, nombre2;
    string nombres[2];
    int puntos[2] = {};
    system("cls");
    cout<< "                     BONZO"<<endl;
    cout<< "-------------------------------------------------------"<<endl;
    solicitarNombres(nombre1, nombre2);
    definirPrimerJugador(nombre1, nombre2, nombres);
    comenzarJuego(nombres, puntos);
}
