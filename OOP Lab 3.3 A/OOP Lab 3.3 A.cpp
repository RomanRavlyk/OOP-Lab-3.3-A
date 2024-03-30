#include <iostream>
#include "operations.h"
#include "opv2.h"
using namespace std;

int main() {
	VectorN vector;
	VecOper vec(vector);

	VectorN vector1;
	VecOper vec1(vector1);
	cin >> vec;
	cout << vec;
	cin >> vec1;
	cout << vec1;
	
	vec * 4;
	cout << vec;
	cout << "Vector length: " << ~vec << endl;
	cout << "Are vectors equal?: ";
	if (vec == vec) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 > vector2: ";
	if (vec > vec) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 < vector2: ";
	if (vec < vec) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vectors length equal?: ";
	if (vec != vec) { cout << "no" << endl; }
	else cout << "yes" << endl;
	cout << "Are vector1 length > vector2 length: ";
	if (vec >= vec) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 length < vector2 length: ";
	if (vec <= vec) { cout << "yes" << endl; }
	else cout << "no" << endl;

	VectorN vector3;
	OpV2 vectr(vector3);

	VectorN vector4;
	OpV2 vectr1(vector4);
	cin >> vector3;
	cout << vector3;
	cin >> vector4;
	cout << vector4;

	vectr * 4;
	cout << vectr;
	cout << "Vector length: " << ~vectr << endl;
	cout << "Are vectors equal?: ";
	if (vectr == vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 > vector2: ";
	if (vectr > vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 < vector2: ";
	if (vectr < vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vectors length equal?: ";
	if (vectr != vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 length > vector2 length: ";
	if (vectr >= vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 length < vector2 length: ";
	if (vectr <= vectr1) { cout << "yes" << endl; }
	else cout << "no" << endl;
}