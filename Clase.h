#pragma once
#include <iostream>
#include <string>
using namespace std;

class convertir {
private:
	int  numero, unidades, decenas, centenas, millares, valor,n,i,num;
	string Rom;
public:
	void Roma();
	void Arab();

};

void convertir::Roma() {
	while (1) {
		cout << "\n Ingresa un numero entre 1 y 3999 para convertirlo a romano: ";
		cin >> numero;

		unidades = numero % 10; numero /= 10;
		decenas = numero % 10; numero /= 10;
		centenas = numero % 10; numero /= 10;
		millares = numero % 10; numero /= 10;

		switch (millares) {
		case 1: cout << "M"; break;
		case 2: cout << "MM"; break;
		case 3: cout << "MMM"; break;
		}

		switch (centenas) {
		case 1: cout << "C"; break;
		case 2: cout << "CC"; break;
		case 3: cout << "CCC"; break;
		case 4: cout << "CD"; break;
		case 5: cout << "D"; break;
		case 6: cout << "DC"; break;
		case 7: cout << "DCC"; break;
		case 8: cout << "DCCC"; break;
		case 9: cout << "CM"; break;
		}

		switch (decenas) {
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		case 4: cout << "XL"; break;
		case 5: cout << "L"; break;
		case 6: cout << "LX"; break;
		case 7: cout << "LXX"; break;
		case 8: cout << "LXXX"; break;
		case 9: cout << "XC"; break;
		}

		switch (unidades) {
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
		}
		return;
	}
}



void convertir::Arab() {
	cout << "Escribe el numero romano: "; cin >> Rom;
	n = stoi(Rom);
	for (i = 0; i < n; i++) {
		if (Rom[i] == 'I' || Rom[i] == 'i')
			valor = 1;
		if (Rom[i] == 'V' || Rom[i] == 'v')
			valor = 5;
		if (Rom[i] == 'X' || Rom[i] == 'x')
			valor = 10;
		if (Rom[i] == 'L' || Rom[i] == 'l')
			valor = 50;
		if (Rom[i] == 'C' || Rom[i] == 'c')
			valor = 100;
		if (Rom[i] == 'D' || Rom[i] == 'd')
			valor = 500;
		if (Rom[i] == 'M' || Rom[i] == 'm')
			valor = 1000;
	}
	for (i = 0; i < n; i++) {
		if (i == n - 1) {
			num += valor;
		else
			if (valor(i >= valor[i + 1])) {
				num + valor[i];
			else
				num - valor[i];
			}
		cout << num;

		}
		}
		return;
}

	