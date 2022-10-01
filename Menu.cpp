#include <iostream>
#include "Clase.h"

using namespace std;

int main()
{
    int opcion;
    convertir obj;
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
            obj.Arab();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 3:
            return 0;
        default:
            cout << "\n No disponible >:/ \n";
            break;
        }
    } while (opcion != 3);
}