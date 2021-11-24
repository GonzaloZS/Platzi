#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libro("CS101 Introduccion a la programacion");

    libro.showMensaje();
    libro.establishPromedio();
}