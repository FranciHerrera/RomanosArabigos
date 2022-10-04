#include <iostream>
#include "Romanos.h"
#include "Arabigos.h"

using namespace std;


int main()
{
    int opcion, number;
    convertir obj;
    string Rom;
    do {
        cout << "-------------------------------------\n";
        cout << "Bienvenido \n";
        cout << "--------------------------------- \n";
        cout << "¿Que quieres hacer? \n";
        cout << "1 - Convertir arabigos a romanos \n";
        cout << "2 - Convertitr romanos a arabigos \n";
        cout << "3 Salir del programa";
        cout << "---------------------------------- \n";
        cout << "Opcion: \n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            obj.Roma();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }
        case 2:
            cout << "Ingresa un numero entre 1 y 3999 para convertirlo a arabigo: ";cin >> Rom;
            Converter c(Rom);
            number = c.RomanToArabic();
            if (number > 0) {
                cout << "\n";
                cout << "Numero romano convertido: " << number;
                cout << "\n";
            }
            else cout << "No pongas eso wey \n";
        cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
        cin >> opcion;
        if (opcion == 1) {
            break;
        }
        else {
            return 0;
        }
    }
    } while (opcion != 3); {
    }
}