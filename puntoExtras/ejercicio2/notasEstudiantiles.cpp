// Librerias a incluir
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[50];
    char codigo[5];
    int option;

    cout << "Bienvenido, ingresa tu nombre: ";
    cin.getline(name, 50);

    cout << "Ingresa tu codigo de estudiante (6 digitos): ";
    cin.getline(codigo, 6, '\n');
    cin.ignore(); // Limpiar el buffer de entrada

    if (codigo[5] != '\0')
    {
        cout << "El codigo debe tener exactamente 6 digitos." << endl;
    }
    else
    {
        cout << "Opciones del menu: " << endl;
        cout << "1. Agregar notas" << endl;
        cout << "2. Consultar todas las notas" << endl;
        cout << "3. Calcular promedio" << endl;
        cout << "4. Salir" << endl;
        cout << "----------------------------------------" << endl;
 
        cout << "Ingrese una opcion: ";
        cout << option << endl;
        cin >> option;

        switch (option)
        {
        case 1:
        {
            float notas[9];
            cout << "Ingrese las 9 notas: " << endl;
            for (int i = 0; i < 9; i++)
            {
                cout << "Nota " << (i + 1) << ": ";
                cin >> notas[i];
                // Validar que la nota este entre 0 y 10
                while (notas[i] < 0 || notas[i] > 10)
                {
                    cout << "Nota invalida. Ingrese una nota entre 0 y 10: ";
                    cin >> notas[i];
                }
            }
        }
        break;
        case 2:
        {
            int notas[9];
            cout << "Notas ingresadas: " << endl;
            for (int i = 0; i < 9; i++)
            {
                cout << "Nota " << (i + 1) << ": " << notas[i] << endl;
            }
            break;
        }
        case 3:
        {
            int notas[9];
            float suma = 0;
            for (int i = 0; i < 9; i++)
            {
                suma += notas[i];
            }
            float promedio = suma / 9;
            cout << "El promedio de las notas es: " << promedio << endl;
            break;
        }
        case 4:
        {
            cout << "Gracias por utilizar nuestro sistema" << endl;
            break;
        }

        default:
            break;
        }
    }

    // Devuelve 0 para indicar que el programa ha finalizado.
    return 0;
}
