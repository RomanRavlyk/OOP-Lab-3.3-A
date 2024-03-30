#include <iostream>
#include "opv2.h"
#include <sstream>

using namespace std;

OpV2::OpV2() {
	for (int i = 0; i < getSize(); i++) {
		setElem(i, 0);
	}
}

OpV2::OpV2(const VectorN& vector) {
	this->setSize(getSize());
	for (int i = 0; i < this->getSize(); i++) {
		setElem(i, getElem(i));
	}
}

OpV2::OpV2(const OpV2& vec) {
	this->setSize(getSize());
	for (int i = 0; i < this->getSize(); i++) {
		this->setElem(i, getElem(i));
	}
}


bool operator==(const OpV2& vector1, const OpV2& vector2) {
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

bool operator<(const OpV2& vector1, const OpV2& vector2) {
	return vector1.getSize() < vector2.getSize();
}

bool operator>(const OpV2& vector1, const OpV2& vector2) {
	return vector1.getSize() > vector2.getSize();
}

double operator~(const OpV2& vec) {
	double length = 0.0;
	for (int i = 0; i < vec.getSize(); i++) {
		length += vec.getElem(i) * vec.getElem(i);
	}
	return sqrt(length);
}

OpV2 operator*(OpV2& vector, int value) {
	int somenum;
	for (int j = 0; j < vector.getSize(); j++) {
		somenum = vector.getElem(j) * value;
		vector.setElem(j, somenum);
	}
	return vector;
}

bool operator >=(const OpV2& vec1, const OpV2& vec2) {
	return ~vec1 > ~vec2;
}
bool operator <=(const OpV2& vec1, const OpV2& vec2) {
	return ~vec1 < ~vec2;
}
bool operator !=(const OpV2& vec1, const OpV2& vec2) {
	return ~vec1 != ~vec2;
}

ostream& operator << (ostream& out, const OpV2& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, OpV2& r)
{
	cout << " Enter size = "; in >> r.size;

	for (int i = 0; i < r.size; i++) {
		cout << "Enter vector Elements: ";
		in >> r.vector[i];
	}

	cout << endl;
	return in;
}

OpV2::operator string() const {
	stringstream ss;
	ss << "Your array: ";
	for (int i = 0; i < size; i++) {
		ss << vector[i] << " ";
	}
	ss << endl;
	return ss.str();
}
