// Librerias a incluir
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaracion de variables
    int velocity = 0;

    // Entrada de datos
    cout << "Bienvenido, ingresa la velocidad del vehiculo: ";
    cin >> velocity;

    // Validacion de la velocidad
    if(velocity < 0)
    {
        cout << "La velocidad no puede ser negativa." << endl;
    }
    else if(velocity <= 30)
    {
        cout << "El vehiculo va lento" << endl;
    }
    else if(velocity >= 80)
    {
        cout << "El vehiculo debe detenerse" << endl;
    }
    else
    {
        cout << "El vehiculo esta dento del limite" << endl;
    }

    // Devuelve 0 para indicar que el programa ha finalizado.
    return 0;
}
