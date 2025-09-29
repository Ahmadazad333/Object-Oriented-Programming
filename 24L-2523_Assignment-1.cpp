//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Function to read array from file
//void readArray(ifstream& file, int*& array, int& size) {
//    file >> size;
//    if (size <= 0) {
//        cerr << "Error: Array size must be greater than 0." <<endl;
//        exit(1);
//    }
//    array = new int[size];
//    char ch;
//    for (int i = 0; i < size; ++i) {
//        file >> *(array + i); 
//        if (i < size - 1) file >> ch; 
//    }
//}
//
//// Function to sort arrays
//void sortArray(int* array, int size) {
//   for (int* p1 = array; p1 < array + size - 1; ++p1) {
//        for (int* p2 = array; p2 < array + size - 1; ++p2) {
//            if (*p2 > *(p2 + 1)) {
//                int temp = *p2;
//                *p2 = *(p2 + 1);
//                *(p2 + 1) = temp;
//            }
//        }
//    }
//}
//
//// Function to remove duplicates 
//int removeDuplicates(int* array, int size) {
//    if (size == 0) return 0;
//    int* uniquePtr = array;
//    for (int* current = array + 1; current < array + size; ++current) {
//        if (*current != *uniquePtr) {
//            *(++uniquePtr) = *current;
//        }
//    }
//    return uniquePtr - array + 1;
//}
//
//// Function to print 
//void printArray(const int* array, int size) {
//    for (const int* p = array; p < array + size; ++p) {
//        cout << *p;
//        if (p < array + size - 1) cout << ",";
//    }
//    cout << endl;
//}
//
//// Function to find the union
//void findUnion(const int* array1, int size1, const int* array2, int size2, int*& unionArray, int& unionSize) {
//    unionArray = new int[size1 + size2];
//    int* unionPtr = unionArray;
//    const int* p1 = array1;
//    const int* p2 = array2;
//
//    while (p1 < array1 + size1 && p2 < array2 + size2) {
//        if (*p1 < *p2) {
//            *unionPtr++ = *p1++;
//        }
//        else if (*p1 > *p2) {
//            *unionPtr++ = *p2++;
//        }
//        else {
//            *unionPtr++ = *p1++;
//            ++p2;
//        }
//    }
//
//    while (p1 < array1 + size1) *unionPtr++ = *p1++;
//    while (p2 < array2 + size2) *unionPtr++ = *p2++;
//
//    unionSize = unionPtr - unionArray;
//}
//
////Main Function
//int main() {
//    ifstream file("Data1.txt");
//    if (!file) {
//        cerr << "Unable to open file." << endl;
//        return 1;
//    }
//
//    int* array1 = nullptr, * array2 = nullptr;
//    int size1, size2;
//
//    // Reading Array From the File
//    readArray(file, array1, size1);
//    readArray(file, array2, size2);
//    cout << "Input Array 1 : " ;
//    printArray(array1, size1);
//    cout << "Input Array 2 : " ;
//    printArray(array2, size2);
//    cout << endl;
//    // Sortting arrays
//    sortArray(array1, size1);
//    sortArray(array2, size2);
//    cout << "Sorted Array 1 : " ;
//    printArray(array1, size1);
//    cout << "Sorted Array 2 : " ;
//    printArray(array2, size2);
//    cout << endl;
//    // Remove duplicates from the array
//    size1 = removeDuplicates(array1, size1);
//    size2 = removeDuplicates(array2, size2);
//    cout << "Distinct Elements in Array 1 : ";
//    printArray(array1, size1);
//    cout << "Distinct Elements in Array 2 : " ;
//    printArray(array2, size2);
//    cout << endl;
//    // Find union of arrays
//    int* unionArray = nullptr;
//    int unionSize;
//    findUnion(array1, size1, array2, size2, unionArray, unionSize);
//    cout << "Union of Array 1 and Array 2 : ";
//    printArray(unionArray, unionSize);
//    cout << endl;
//    // Deallocate memory
//    delete[] array1;
//    delete[] array2;
//    delete[] unionArray;
//
//    return 0;
//}