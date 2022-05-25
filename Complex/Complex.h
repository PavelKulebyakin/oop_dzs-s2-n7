#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Complex{
	double im;
	double re;

public:

	Complex(double new_re, double new_im) {
		re = new_re; im = new_im;
	}
	Complex(double new_re):Complex(new_re, 0) {}
	Complex():Complex(0, 0) {}
	~Complex() {}

	double GetIm();
	void SetIm(double);
	
	double GetRe();
	void SetRe(double);

	Complex operator + (Complex);

	Complex operator - (Complex);

	Complex operator * (Complex);

	Complex operator / (Complex);

	double mod();

	friend std::ostream& operator << (std::ostream&, Complex);

	friend std::istream& operator >> (std::istream&, Complex&);

	/*static Complex random(int);*/

	void random_c(int);

};

#endif // !COMPLEX_H
