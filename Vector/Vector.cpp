#include "Vector.h"

int random(int range)
{
		return (rand() % range) * pow(-1, rand() % 2);
}

void Vector::add_len(int new_len)
{
	this->len = new_len;
}

Vector::Vector(int new_len, double* new_coordinates)
{
	len = new_len;
	coordinate = new_coordinates;

}

Vector::Vector()
{
	len = 1;
	coordinate = new double[1]{ 0 };
}

Vector::~Vector()
{
}

void Vector::set_vector(int new_len, double* new_coordinates)
{
	this->len = new_len;
	delete[] coordinate;
	this->coordinate = new_coordinates;
}

void Vector::set_coordinate(int pos, double new_coordinate)
{
	if (pos <= this->len) {
		coordinate[pos - 1] = new_coordinate;
	}
}

int Vector::get_len()
{
	return this->len;
}

double* Vector::get_coordinates()
{
	return this->coordinate;
}

void Vector::random_v(int dim, int range)
{
	this->len = rand() % dim + 1;
	this->coordinate = new double[this->len];

	for (int i = 0; i < this->len; i++) {
		this->coordinate[i] = random(range);
	}
}

std::ostream& operator<<(std::ostream& out, Vector vector)
{
	out << "( ";
	for (int i = 0; i < vector.len; i++) {
		out << vector.coordinate[i];
		if (i < vector.len - 1) out << ", ";
	}
	out << " )";

	return out;
}

double Vector::mod(Vector)
{
	double Sum = 0;
	for (int i = 0; i < this->len; i++) {
		Sum += pow(this->coordinate[i], 2);
	}

	return sqrt(Sum);
}

Vector Vector::operator+(Vector vector_2)
{
	Vector new_vector;
	
	new_vector.len = max(this->len, vector_2.len);
	new_vector.coordinate = new double[new_vector.len];

	if (this->len >= vector_2.len) {

		for (int i = 0; i < vector_2.len; i++) {
			new_vector.coordinate[i] = this->coordinate[i] + vector_2.coordinate[i];
		}
		for (int i = vector_2.len; i < this->len; i++) {
			new_vector.coordinate[i] = this->coordinate[i];
		}
	}
	else {

		for (int i = 0; i < this->len; i++) {
			new_vector.coordinate[i] = this->coordinate[i] + vector_2.coordinate[i];
		}
		for (int i = this->len; i < vector_2.len; i++) {
			new_vector.coordinate[i] = vector_2.coordinate[i];
		}
	}
	return new_vector;
}

Vector Vector::operator-(Vector vector_2)
{
	Vector new_vector;

	new_vector.len = max(this->len, vector_2.len);
	new_vector.coordinate = new double[new_vector.len];

	if (this->len >= vector_2.len) {

		for (int i = 0; i < vector_2.len; i++) {
			new_vector.coordinate[i] = this->coordinate[i] - vector_2.coordinate[i];
		}
		for (int i = vector_2.len; i < this->len; i++) {
			new_vector.coordinate[i] = this->coordinate[i];
		}
	}
	else {

		for (int i = 0; i < this->len; i++) {
			new_vector.coordinate[i] = this->coordinate[i] - vector_2.coordinate[i];
		}
		for (int i = this->len; i < vector_2.len; i++) {
			new_vector.coordinate[i] = - vector_2.coordinate[i];
		}
	}
	return new_vector;
}

Vector Vector::operator*(double number)
{
	Vector new_vector;

	new_vector.len = this->len;
	new_vector.coordinate = new double[new_vector.len];

	for (int i = 0; i < this->len; i++) {
		new_vector.coordinate[i] = this->coordinate[i] * number;
	}

	return new_vector;

}

Vector Vector::operator/(double number)
{
	Vector new_vector;

	new_vector.len = this->len;
	new_vector.coordinate = new double[new_vector.len];

	for (int i = 0; i < this->len; i++) {
		new_vector.coordinate[i] = this->coordinate[i] / number;
	}

	return new_vector;

}

double Vector::operator*(Vector vector_2)
{
	double scalar = 0;
	
	for (int i = 0; i < min(this->len, vector_2.len); i++) {
		scalar += this->coordinate[i] * vector_2.coordinate[i];
	}

	return scalar;
}

