#include"Circle.h"

double Circle::get_rad()
{
	return this->r;
}

void Circle::set_red(double new_r)
{
	this->r = new_r;
}

double Circle::get_square()
{
	return pow(this->r, 2) * M_PI;
}

double Circle::get_length()
{
	return 2 * M_PI * this->r;
}

