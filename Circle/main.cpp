#include"Circle.h"

int main()
{
	cout << "R = "; double r;  cin >> r;  
	Circle A = { r };

	cout << "Square = " << A.get_square() << "\n";
	cout << "Length = " << A.get_length() << "\n";

}