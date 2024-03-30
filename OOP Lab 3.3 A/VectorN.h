#pragma once
#include <iostream>
using namespace std;

class VectorN {
	static const int MAX_SIZE = 100;
	int size;
	int vector[MAX_SIZE];
public:

	VectorN();
	VectorN(int);
	VectorN(const VectorN& vector);
	~VectorN() {};
	int getElem(int value) const { return vector[value]; }
	void setElem(int index, int value) { vector[index] = value; }
	int getSize() const{ return size; };
	void setSize(int value) { size = value; };
	friend ostream& operator << (ostream&, const VectorN&);
	friend istream& operator >> (istream&, VectorN&);
	operator string() const;
};