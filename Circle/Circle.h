#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

class Circle
{
private:
	double r;
	const double M_PI = 3.14159265359;

public:
	
	Circle(double new_r) {r = new_r;};
	Circle():Circle(0){};
	~Circle(){};

	double get_rad();
	void set_red(double);
	double get_square();
	double get_length();

};

#endif
