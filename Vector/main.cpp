#include "Vector.h"

int main() {

	srand(time(0));

	Vector vector_1, vector_2; 

	vector_1.random_v(5, 100); vector_2.random_v(5, 100);

	cout << vector_1 << "\n" << vector_2 << "\n";

	cout << vector_1 + vector_2 << "\n";

	cout << vector_1 - vector_2 << "\n";

	int a = random(100);

	cout << vector_1 * a << "\n";

	cout << vector_1 / a << "\n";

	cout << vector_1 * vector_2;

}