#include <iostream>
#include "operations.h"
using namespace std;

VecOper::VecOper() {
	for (int i = 0; i < getSize(); i++) {
		setElem(i, 0);
	}
}

VecOper::VecOper(const VectorN& vector) {
	this->setSize(vector.getSize());
	for (int i = 0; i < this->getSize(); i++) {
		setElem(i, vector.getElem(i));
	}
}

VecOper::VecOper(const VecOper& vec) {
	this->setSize(getSize());
	for (int i = 0; i < this->getSize(); i++) {
		this->setElem(i, getElem(i));
	}
}
bool operator==(const VecOper& vector1, const VecOper& vector2) {
	if (vector1.getSize() != vector2.getSize()) {
		return false;
	}

	for (int i = 0; i < vector1.getSize(); ++i) {
		if (vector1.getElem(i) != vector2.getElem(i)) {
			return false;
		}
	}

	return true;
}

bool operator<(const VecOper& vector1, const VecOper& vector2) {
	return vector1.getSize() < vector2.getSize();
}

bool operator>(const VecOper& vector1, const VecOper& vector2) {
	return vector1.getSize() > vector2.getSize();
}

double operator~(const VecOper& vec) {
	double length = 0.0;
	for (int i = 0; i < vec.getSize(); i++) {
		length += vec.getElem(i) * vec.getElem(i);
	}
	return sqrt(length);
}

VecOper operator*(VecOper& vector, int value) {
	int somenum;
	for (int j = 0; j < vector.getSize(); j++) {
	    somenum = vector.getElem(j) * value;
		vector.setElem(j, somenum);
	}
	return vector;
}

bool operator >=(const VecOper& vec1, const VecOper& vec2) {
	return ~vec1 > ~vec2;
}
bool operator <=(const VecOper& vec1, const VecOper& vec2) {
	return ~vec1 < ~vec2;
}
bool operator !=(const VecOper& vec1, const VecOper& vec2) {
	return ~vec1 != ~vec2;
}