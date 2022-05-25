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

	Vector operator + (Vector);	//	�������� ��������

	Vector operator - (Vector); //	��������� ��������

	Vector operator * (double);	//	��������� ������� �� ����� ���� double

	Vector operator / (double);	//	������� ������� �� ����� ���� double

	double operator * (Vector);	//	��������� ������������� ��������

	friend std::ostream& operator << (std::ostream&, Vector);

	//friend std::istream& operator >> (std::istream&, Vector&);	/////!!!!!

};

#endif
