#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    srand (time(NULL));

    int vec1[6] = {1, 2, 3, 4, 5, 6};
    for(int x=0; x<6; x++)
    {
        dibujarDado(vec1[x]);
    }

    int vec2[3] = {3, 5, 2};
    dibujarTresDadosEnLinea(vec2);

    return 0;
}
