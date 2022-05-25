#include "Complex.h"

int main() {

	srand(time(0));

	Complex A, B;

	A.random_c(100); B.random_c(100);

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	cout << "\nA + B = " << A + B << endl;
	cout << "\nA - B = " << A - B << endl;

	cout << "\nA * B = " << A * B << endl;
	cout << "\nA / B = " << A / B << endl;

	cout << "\nModule A = " << A.mod() << endl;

	cout << "\nModule B = " << B.mod() << endl;

}
