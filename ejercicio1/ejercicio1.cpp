#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers [20];
    
    cout << "Hola, por favor ingresa 20 numeros enteros." << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    cout << "Ingresa un numero:";
    for (int i = 0; i < 20; i++) {
        cout << numbers[i];
        if (i < 19) {
            cout << ", ";
        }
    }
    return 0;
}