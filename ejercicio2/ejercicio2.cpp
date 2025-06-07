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
    // Si la velocidad es negativa, se muestra un mensaje de error.
    if(velocity < 0)
    {
        cout << "La velocidad no puede ser negativa." << endl;
    }
    // Si la velocidad es menor a 30, se muestra un mensaje indicando que el vehiculo va lento.
    else if(velocity < 30)
    {
        cout << "El vehiculo va lento" << endl;
    }
     // Si la velocidad es mayor a 80, se muestra un mensaje indicando que el vehiculo debe deternerse.
    else if(velocity > 80)
    {
        cout << "El vehiculo debe detenerse" << endl;
    }
    // Si la velocidad es mayor a 30 y menor a 80, se muestra un mensaje indicando que el vehiculo esta dentro del limite.
    else
    {
        cout << "El vehiculo esta dentro del limite" << endl;
    }

    // Devuelve 0 para indicar que el programa ha finalizado.
    return 0;
}
