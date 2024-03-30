#include <iostream>
#include "VectorN.h"
#include <sstream>
using namespace std;


VectorN::VectorN() {
	this->size = 0;
}
VectorN::VectorN(int size) {
	this->size = size;
}
VectorN::VectorN(const VectorN& vector) {
	size = vector.size;
	for (int i = 0; i < size; i++) {
		this->vector[i] = vector.vector[i];
	}
}


ostream& operator << (ostream& out, const VectorN& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, VectorN& r)
{
	cout << " Enter size = "; in >> r.size;

	for (int i = 0; i < r.size; i++) {
		cout << "Enter vector Elements: ";
		in >> r.vector[i];
	}

	cout << endl;
	return in;
}

VectorN::operator string() const {
	stringstream ss;
	ss << "Your array: ";
	for (int i = 0; i < size; i++) {
		ss << vector[i] << " ";
	}
	ss << endl;
	return ss.str();
}

