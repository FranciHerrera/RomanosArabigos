#pragma once
#include <iostream>
#include <string>
using namespace std;

class convertir {
private:
	int  numero, unidades, decenas, centenas, millares;
public:
	void Roma();
};

void convertir::Roma() {
	while (1) {
		cout << "\n Ingresa un numero entre 1 y 3999 para convertirlo a romano: ";cin >> numero;
		cout << "\n";

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

class RTA {
private:
	string Rom;
public:
	RTA(string rn);
	int ra();
};

RTA::RTA(string rn) {
	this->Rom = rn;
}

int RTA::ra() {
	int value[100];
	int n, i, number = 0;
	char* r_num = const_cast<char*>(Rom.c_str());
	n = strlen(r_num);
	for (i = 0; i < n; i++) {
		if (r_num[i] == 'I' || r_num[i] == 'i') value[i] = 1;
		if (r_num[i] == 'V' || r_num[i] == 'v') value[i] = 5;
		if (r_num[i] == 'X' || r_num[i] == 'x') value[i] = 10;
		if (r_num[i] == 'L' || r_num[i] == 'l') value[i] = 50;
		if (r_num[i] == 'C' || r_num[i] == 'c') value[i] = 100;
		if (r_num[i] == 'D' || r_num[i] == 'd') value[i] = 500;
		if (r_num[i] == 'M' || r_num[i] == 'm') value[i] = 1000;
	}
	for (i = 0; i < n; i++) {
		if (i == n - 1) number += value[i];
		else if (value[i] >= value[i + 1]) number += value[i];
		else number -= value[i];
	}
	return number;
}