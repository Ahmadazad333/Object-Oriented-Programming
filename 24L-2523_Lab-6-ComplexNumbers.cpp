//#include<iostream>
//#include "ComplexNumbers.h"
//
//using namespace std;
//
//ComplexNumbers::ComplexNumbers() {//Default constructor
//
//	cout << "\tDefault Constructor Called\t" << endl;
//
//	real = new int(0);
//	imaginary = new int(0);
//
//}
//
//ComplexNumbers::ComplexNumbers(int real, int imaginary) {//Overloaded Constructor
//
//	cout << "\tOverloaded Constructor Called\t" << endl;
//
//	this->real = new int(real);
//	this->imaginary = new int(imaginary);
//
//}
//
//ComplexNumbers::ComplexNumbers(ComplexNumbers& a) {//Copy Constructor
//
//	cout << "Copy Constructor Called" << endl;
//	real = new int(*a.real);
//	imaginary = new int(*a.imaginary);
//
//}
//
//void ComplexNumbers::Input() {//Funtion To take input
//
//	cout << "Real Part: ";
//	cin >> *real;
//	cout << "Imaginary Part: ";
//	cin >> *imaginary;
//
//}
//
//void ComplexNumbers::Output() {//Function to take output
//
//	cout << *real << "+" << *imaginary << "i" << endl;
//
//}
//
//float ComplexNumbers::Magnitude() {//Function that calculates the magnitude
//
//	return pow(pow(*real, 2) + pow(*imaginary, 2), 0.5);
//
//}
//
//ComplexNumbers::~ComplexNumbers() {//Destructor
//
//	delete real;
//	delete imaginary;
//}
//
//ComplexNumbers& ComplexNumbers::operator=(const ComplexNumbers& a) {
//
//	if (this == &a) return *this;
//	*real = *a.real;
//	*imaginary = *a.imaginary;
//	cout << "Assignment Operator Called" <<endl;
//
//	return *this;
//
//}
//
//ComplexNumbers ComplexNumbers::Add(const ComplexNumbers& a) {
//
//	ComplexNumbers temp;
//	*(temp.real) = *real + *a.real;
//	*(temp.imaginary) = *imaginary + *a.imaginary;
//
//	return temp;
//
//}
