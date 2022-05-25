#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int random(int);

class Vector
{
	int len; 
	double* coordinate;
	void add_len(int);

public:

	Vector(int, double*);
	Vector();
	~Vector();

	void set_vector(int, double*);
	void set_coordinate(int, double);
	int get_len();
	double* get_coordinates();

	void random_v (int, int);
	double mod(Vector);

	Vector operator + (Vector);	//	Сложение векторов

	Vector operator - (Vector); //	Вычитание векторов

	Vector operator * (double);	//	Умножение вектора на число типа double

	Vector operator / (double);	//	Деление вектора на число типа double

	double operator * (Vector);	//	Скалярное пороизведение векторов

	friend std::ostream& operator << (std::ostream&, Vector);

	//friend std::istream& operator >> (std::istream&, Vector&);	/////!!!!!

};

#endif
