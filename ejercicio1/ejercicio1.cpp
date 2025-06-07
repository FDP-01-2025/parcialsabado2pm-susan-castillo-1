// Librerias a incluir
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaracion de variables
    int numbers[20];
    int numberToFind = 0;
    int aux = 0;

    // Entrada de datos
    cout << "Bienvenido, por favor ingresa 20 numeros enteros." << endl;
    // Bucle para introducir los numeros
    for (int i = 0; i < 20; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Entrada del numero a buscar
    cout << "Ingresa un numero que quieras buscar: ";
    cin >> numberToFind;

    // Bucle para buscar el numero
    for (int i = 0; i < 20; i++)
    {
        do
        {
            if (numbers[i] == numberToFind)
            {
                cout << "El numero " << numberToFind << " se encuentra en la posicion " << (i + 1) << "." << endl;
                aux = 1; // Variable auxiliar para indicar que se ha encontrado el numero
                // Si se encuentra el numero, salimos del bucle
                break;
            }
            else if (i == 19) // Si llegamos al final del array y no lo encontramos
            {
                cout << "El numero " << numberToFind << " no se encuentra en la lista." << endl;
                aux = 0; // Variable auxiliar para indicar que no se ha encontrado el numero
            }
            i++;
        } while (aux == 0 && i < 20); // Continuar el bucle mientras no se haya encontrado el numero y no se haya llegado al final del array

        // Finaliza el programa
        return 0;
    }
}
