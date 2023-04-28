#include <iostream>
#include <random>

using namespace std;

int factorial(int entero) {
    if (entero == 1)
        return 1;
    else
        return entero * factorial(entero - 1);
}
int main() {
    srand(time(NULL));
    char arreglo[10];
	int opcion = 0;
    int size = 0;
    int entero = 0;
    int resultado = 0;
	while (true) {
		cout << " MENU PRINCIPAL:\n1. Ordenamiento y omision en arreglos\n2. Factoriales y figuras\n3. Salir\nIngrese una opcion:\n" << endl;
		cin >> opcion;
		system("cls");
		switch (opcion) {
		case 1:
			cout << "Ordenamiento y omision en arreglos" << endl;
            for (int i = 0; i < 10; i++) {
                arreglo[i] = (char)(rand() % 26 + 97);
            }

            cout << "Arreglo original: ";
            for (int i = 0; i < 10; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < 9; i++) {
                for (int j = i + 1; j < 10; j++) {
                    if (arreglo[i] > arreglo[j]) {
                        char temp = arreglo[i];
                        arreglo[i] = arreglo[j];
                        arreglo[j] = temp;
                    }
                }
            }

            size = 1;
            for (int i = 1; i < 10; i++) {
                if (arreglo[i] != arreglo[size - 1]) {
                    arreglo[size] = arreglo[i];
                    size++;
                }
            }

            cout << "Nuevo arreglo con caracteres ordenados y sin repetir: ";
            for (int i = 0; i < size; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
            system("pause");
            system("cls");
			break;
		case 2:
			cout << "Factoriales y figuras" << endl;
            cout << "Ingrese el numero a sacar el factorial:";
            cin >> entero;
            while (entero < 1) {
                cout << "Ingrese un numero entero positivo:";
                cin >> entero;
            }
            resultado = factorial(entero);
            cout << "El factorial de " << entero << " es " << resultado << endl;
            for (int i = 1; i <= entero; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }

			break;
		case 3:
			exit(1);
			break;
		default:
			break;
		}
	}
}