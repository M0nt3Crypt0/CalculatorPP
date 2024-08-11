#include <iostream>
#include "../include/main.h"

using namespace std;

int main() {
	double a, b, res;
	char op;

	cout << "Introduce la operación a realizar (+ | - | * | /):" << endl;
	cin >> op;

	cout << "Introduce el primer número:" << endl;
	cin >> a;

	cout << "Introduce el segundo número:" << endl;
	cin >> b;

	if (op == '+') {
		res = suma(a, b);
	} else if (op == '-') {
		res = resta(a, b);
	} else if (op == '*') {
		res = multiplica(a, b);
	} else if (op == '/') {
		res = divide(a, b);
	} else {
		cout << "ERROR: Operación no reconocida" << endl;
		return -1;
	}

	cout << "El resultado es: " << res << endl;
	return 0;
}

double suma(double a, double b) {
	return a + b;
}

double resta(double a, double b) {
	return a - b;
}

double multiplica(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}
