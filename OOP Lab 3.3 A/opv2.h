#pragma once
#include <iostream>
#include "VectorN.h"
using namespace std;

class OpV2 : private VectorN {
	static const int MAX_SIZE = 100;
	int size;
	int vector[MAX_SIZE];
public:
	OpV2();
	OpV2(const VectorN& v);
	OpV2(const OpV2& o);
	~OpV2() {};

	int getElem(int value) const { return vector[value]; }
	void setElem(int index, int value) { vector[index] = value; }
	int getSize() const { return size; };
	void setSize(int value) { size = value; };
	friend ostream& operator << (ostream&, const OpV2&);
	friend istream& operator >> (istream&, OpV2&);

	operator string() const;

	friend double operator~(const OpV2& vec);
	friend OpV2 operator*(OpV2& vec, int value);
	friend bool operator ==(const OpV2& vector1, const OpV2& vector2);
	friend bool operator >(const OpV2& vector1, const OpV2& vector2);
	friend bool operator <(const OpV2& vector1, const OpV2& vector2);
	friend bool operator !=(const OpV2& vector1, const OpV2& vector2);
	friend bool operator >=(const OpV2& vector1, const OpV2& vector2);
	friend bool operator <=(const OpV2& vector1, const OpV2& vector2);
};