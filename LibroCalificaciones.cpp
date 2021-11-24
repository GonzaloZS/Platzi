#include <iostream>
#include <iomanip>
#include "LibroCalificaciones.h"
#define NOTES 10


using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
{
    setNombreCurso(nombre);
}

void LibroCalificaciones::setNombreCurso(string nombre)
{
    if (nombre.size() <= 25)
        nombreCurso = nombre;

    if (nombre.size() > 25) {
        nombreCurso = nombre.substr(0, 25);

        cerr << "El nombre \"" << nombre << "\" excede la longitud maxima\n"
            "Se limito a los 25 primeros caracteres.\n" << endl;
    }
}

string LibroCalificaciones::getNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::showMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para\n" << getNombreCurso()
        << "!" << endl;
}

void LibroCalificaciones::establishPromedio() const
{
    /*
    //Ciclo con counter
    unsigned int total = 0, counter = 1, note = 0;

    while (counter <= NOTES)
    {
        cout << "Escriba la calificacion " << counter << ": ";
        cin >> note;

        total += note;
        ++counter;
    }

    cout << "\nEl total de las " << NOTES << " calificaciones es: " << total << endl;
    cout << "El promedio de la clase es: " << total / NOTES << endl;
    */

    // Ciclo con sentinel
    unsigned int total = 0, counter = -1, noteSentry = 0;

    while (noteSentry != -1)
    {
        total += noteSentry;
        ++counter;

        cout << "Escriba la calificacion o -1 para terminar: ";
        cin >> noteSentry;
    }

    if (counter != 0)
    {
        cout << "\nEl total de las " << counter << " calificaciones introducidas es " << total << endl;
        cout << setprecision(2) << fixed;
        cout << "El promedio de la clase es " << static_cast<double>(total) / counter << endl;;
    }
}