#include <iostream>
#include "Romanos.h"

using namespace std;

int main()
{
    int opcion, number;
    convertir obj;
    string Rom;
    do {
        cout << "-------------------------------------\n";
        cout << "Bienvenido \n";
        cout << "-------------------------------------\n";
        cout << "Que quieres hacer? \n";
        cout << "1 - Convertir arabigos a romanos \n";
        cout << "2 - Convertitr romanos a arabigos \n";
        cout << "3 Salir del programa";
        cout << "---------------------------------- \n";
        cout << "Opcion: \n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            obj.Roma();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                system("cls");
                break;
            }
            else {
                return 0;
            }
        case 2:
            system("cls");
            cout << "Ingresa un numero entre 1 y 3999 para convertirlo a arabigo: "; cin >> Rom;
            RTA c(Rom);
            number = c.ra();
            if (number > 0) {
                cout << "\n";
                cout << number;
            }
            else cout << "Valor no aceptado \n";
        cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
        cin >> opcion;
        if (opcion == 1) {
            system("cls");
            break;
        }
        else {
            return 0;
        }
    }
    } while (opcion != 3); {
    }
}