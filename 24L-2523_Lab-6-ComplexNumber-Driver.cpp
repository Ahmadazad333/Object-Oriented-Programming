//#include<iostream>
//#include"ComplexNumbers.h"
//
//using namespace std;
//
//int main() {
//
//	ComplexNumbers C1;//Creating Object
//
//	cout << "-------Complex Number 1 -------" << endl;
//	C1.Input();
//	cout << "Complex Number:\t";
//	C1.Output();
//	cout << "-------------------------------" << endl;
//
//	ComplexNumbers* cPtr;//Checking if it calls any constructor? No
//	cPtr = new ComplexNumbers(3, 5);
//
//	cout << "\n--------Array in Stack--------\n";
//
//	ComplexNumbers array[5];//making array in stack
//	cout << "\nEnter Enteries for Complex Numbers\n" << endl;
//	for (int i = 0; i < 5; i++) {//taking input for the each entry of array
//	
//		cout << "----------" << i +1 << "----------" << endl;
//		array[i].Input();
//	
//	}
//	cout << "-----------------------------" << endl;
//	cout << endl;
//	cout << "\tThe Complex Numbers are:" << endl;
//
//	for (int i = 0; i < 5; i++) {
//	
//		cout << "----------" << i + 1 << "----------" << endl;
//		cout << "Complex Number:\t";
//		array[i].Output();
//	
//	}
//	cout << "-----------------------------" << endl;
//	cout << endl;
//	cout << "\n--------Array in Heap--------\n";
//
//	int sizeofarray;
//	cout << "\nEnter size of array:\t";
//	cin >> sizeofarray;
//
//	ComplexNumbers* array1 = new ComplexNumbers[sizeofarray];
//	for (int i = 0; i < sizeofarray; i++) {
//
//		cout << "----------" << i + 1 << "----------" << endl;
//		array1[i].Input();
//
//	}
//	cout << "\n-----------------------------" << endl;
//	cout << endl;
//	cout << "\tThe Complex Numbers are:" << endl;
//
//	for (int i = 0; i < sizeofarray; i++) {
//
//		cout << "----------" << i + 1 << "----------" << endl;
//		cout << "Complex Number:\t";
//		array1[i].Output();
//		cout << "Magnitude:\t" << array1[i].Magnitude();
//		cout << endl;
//		
//	}
//	cout << "-----------------------------" << endl;
//	delete[] array1;
//
//	////Question-7
//	//ComplexNumbers c1(3, 4);
//
//	//ComplexNumbers c2(4, 5);
//	//{
//	//	ComplexNumbers temp;
//	//	temp= c1;
//	//	c1 = c2;
//	//	c2 = temp;
//	//}
//	//c1.Output();
//	//c2.Output();
//	//Answer: Yes,the program runs and The program crashes as the scope of temp is only inside the brackets and C1 and C2 both are pointing to temp
//
//	////Question-8
//	//ComplexNumbers c1(5, 10);
//	//{
//	//	ComplexNumbers c2(c1);
//	//	cout << "c2= ";
//	//	c2.Output();
//	//}
//	//cout << "C1 = ";
//	//c1.Output();
//	//The program runs and the program crashes as the scope of c2 is only inside the brackets and C1 pointing to c2
//
//	////Question-10
//	//ComplexNumbers c1(3, 4);
//	//{
//	//	ComplexNumbers c2, c3;
//	//	c3 = c2 = c1;
//	//	c2.Output();
//	//	c3.Output();
//	//}
//	//c1.Output();
//	//The program crashes because the assignment operator is not created uptill now
//	
//    //// Question 12
//	//ComplexNumbers c1(3, 4);
//	//ComplexNumbers c2(4, 5);
//	//{
//	//	ComplexNumbers temp = c1;
//	//	c1 = c2;
//	//	c2 = temp;
//	//}
//	//cout << "C1= \n";
//	//c1.Output();
//	//cout << "C2= \n";
//	//c2.Output();
//	//ComplexNumbers c3 = c1.Add(c2);
//	//cout << "C1 + C2= \n";
//	//c3.Output();
//
//
//
//}