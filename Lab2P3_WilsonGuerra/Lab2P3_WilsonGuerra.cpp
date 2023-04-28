#include <iostream>
#include <random>

using namespace std;

int main() {
	int opcion = 0;
	while (true) {
		cout << " MENU PRINCIPAL:\n1. Ordenamiento y omision en arreglos\n2. Factoriales y figuras\n3. Salir\nIngrese una opcion:\n" << endl;
		cin >> opcion;
		system("cls");
		switch (opcion) {
		case 1:
			cout << "Ordenamiento y omision en arreglos" << endl;

			break;
		case 2:
			cout << "Factoriales y figuras" << endl;
			break;
		case 3:
			exit(1);
			break;
		default:
			break;
		}
	}
}