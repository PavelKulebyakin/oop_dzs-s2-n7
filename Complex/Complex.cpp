#include "Complex.h"


double Complex::GetIm()
{
	return im;
}

void Complex::SetIm(double new_im)
{
	im = new_im;
}

double Complex::GetRe()
{
	return re;
}

void Complex::SetRe(double new_re)
{
	re = new_re;
}

Complex Complex::operator + (Complex number_2)
{
	return Complex{ number_2.im + this->im , number_2.re + this->re };
}

Complex Complex::operator - (Complex number_2)
{
	return Complex{ number_2.im - this->im , number_2.re - this->re };
}

Complex Complex::operator * (Complex number_2)
{
	return { number_2.re * this->re - number_2.im * this->im ,
		number_2.im * this->re + number_2.re * this->im };
}

Complex Complex::operator / (Complex number_2)
{
	Complex number_1;

	if (pow(number_2.im, 2) + pow(number_2.re, 2) == 0) {
		std::cout << "Error: Incorrect value!";
		return Complex{ 0 , 0 };
	}
	else {
		number_1.re = (number_2.re * this->re + number_2.im * this->im) /
			pow(number_2.im, 2) + pow(number_2.re, 2);

		number_1.im = (number_2.re * this->im - number_2.im * this->re) /
			pow(number_2.im, 2) + pow(number_2.re, 2);
	}

	return number_1;
}

double Complex::mod() {
	return pow(pow(this->im, 2) + pow(this->re, 2), 0.5);
}

//Complex Complex::random(int range)
//{
//	return Complex { rand() % range * pow(-1, rand() % 2) , rand() % range * pow(-1, rand() % 2) };
//}

void Complex::random_c(int range)
{
	this->im = rand() % range * pow(-1, rand() % 2);
	this->re = rand() % range * pow(-1, rand() % 2);
}

std::ostream& operator<<(std::ostream& out, Complex number)
{
	out << number.re << " + " << number.im << "i";
	return out;
}

std::istream& operator >> (std::istream& in, Complex& number)
{
	in >> number.re >> number.im;

	return in;
}
