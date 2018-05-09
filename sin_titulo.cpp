#include<iostream>
using namespace std;

int main() {
	int i, opcion1;
	do {
		cout << "muestra los 10 primeros numeros  \n";
		cout << "Elija el bucle que desea utilizar \n";
		cout << "1: Para-For \n";
		cout << "2: Mientras-while \n";
		cout << "3: Repetir-Do-WHILE \n";
		cin >> opcion1;
		system ("cls");
	} while (!(opcion1>0 && opcion1<4));
	switch (opcion1) {
	case 1:
		cout << " " ;
		cout << "Imprimiendo los 10 primeros numeros con estructura para \n";
		for (i=1;i<=10;i++) {
			cout << "El numero es " << i<<"\n";
		}
		break;
	case 2:
		i = 1;
		cout << "Imprimiendo los 10 primeros numeros con estructura while \n" ;
		while (i<=10) {
			cout << "el numero es " << i<<"\n";
			i = i+1;
		}
		break;
	case 3:
		i = 1;
		cout << "Imprimiendo los 10 primeros numeros con estructura Do-WHILE \n" ;
		do {
			cout << "el numero es " << i<<"\n";
			i = i+1;
		} while (i<=10);
		break;
	default:
		cout << "ingrese un valor valido \n";
	}
	return 0;
}//kevin marcas huamani

