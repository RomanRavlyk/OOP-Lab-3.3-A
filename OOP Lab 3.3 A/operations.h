#pragma once
#include <iostream>
#include "VectorN.h"

using namespace std;

class VecOper: public VectorN {
public:
	VecOper();
	VecOper(const VectorN& vector); 
	VecOper(const VecOper& vec); 
	~VecOper() {};

	friend double operator~(const VecOper& vec);
	friend VecOper operator*(VecOper& vec, int value);
	friend bool operator ==(const VecOper& vector1, const VecOper& vector2);
	friend bool operator >(const VecOper& vector1, const VecOper& vector2);
	friend bool operator <(const VecOper& vector1, const VecOper& vector2);
	friend bool operator !=(const VecOper& vector1, const VecOper& vector2);
	friend bool operator >=(const VecOper& vector1, const VecOper& vector2);
	friend bool operator <=(const VecOper& vector1, const VecOper& vector2);
};
