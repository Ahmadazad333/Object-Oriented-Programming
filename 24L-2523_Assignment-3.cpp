//#include<iostream>
//#include<cstring>
//#include<fstream>
//
//using namespace std;
//
//void StringConcatinate(char* arr1, char* arr2) {
//
//	while (*arr1)
//	{
//		arr1++;   //Moving the arr1 to the end of the string so that when the new string comes it begins from the end
//	}
//
//	*arr1 = ' ';
//	arr1++;
//
//	while (*arr2)
//	{
//		*arr1 = *arr2;//copying the elements of str2 in str1
//		arr1++;
//		arr2++;
//	}
//
//	*arr1 = '\0';//adding null terminator
//}
//
//void stringcopy(char* arr1, char* arr2) {
//
//	while (*arr2)//loop for copying string
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//
//	*arr1 = '\0';
//}
//
//char** StringTokens(char* arr) {
//
//	int count = 0;
//
//	for (int i = 0;arr[i] != '\0';i++) {//Loop to calculate the no of spaces in the sentence
//
//		if (arr[i] == ' ') {
//			count++;
//		}
//
//	}
//
//	count++;//If no of spaces are X it means no of words are (X+1)
//
//	//Allocating Memory for Tokens i.e. for the no of words
//	char** token = new char* [count];
//
//	int start = 0, end = 0, rownumber = 0;
//
//	while (rownumber < count) {
//
//		while (arr[start] == ' ') {//loop to skip leading spaces if any
//
//			start++;
//
//		}
//
//		end = start;
//
//		while (arr[end] != ' ') {//loop to move to the index where the first word finishes 
//
//			end++;
//
//		}
//
//		//Suppose X is the index where the wod finished and Y is the index where the word started therefore the no of letters in the word are ((X-Y)+1)
//		(token[rownumber]) = new char[(end - start) + 1];
//
//		for (int i = start, k = 0;i < end;i++, k++) {
//
//			token[rownumber][k] = arr[i];
//
//		}
//
//		token[rownumber][end - start] = '\0';//Null terminating
//		start = end + 1;
//		rownumber++;
//
//	}
//
//	return token;
//
//}
//
//void StringConcatinate(char* arr1, char* arr2, int& noofelementsinARR1) {
//
//	int count = 0;
//
//	for (int i = 0;arr1[i] != '\0';i++) {
//
//		arr2[noofelementsinARR1++] = arr1[i];
//
//	}
//
//}
//
//char* ReverseString(char* temp) {
//
//	int count = 0, j;
//
//	//First Tokenizing 
//	char** Tokens = StringTokens(temp);
//
//	for (int i = 0;temp[i] != '\0';i++) {//Loop to calculate the number of words in the sentence
//
//		if (temp[i] == ' ') {
//			count++;
//		}
//
//	}
//	count++;
//
//	j = count - 1;//assigning j the value of last row number
//
//	char* reversed = new char[strlen(temp) + 1];//allocating memory to reverse array
//	char* ptr1;
//
//	//swapping the addresses of the rows of Tokenized array to reverrse it
//	for (int i = 0;i < count / 2;i++) {
//
//		ptr1 = Tokens[i];
//		Tokens[i] = Tokens[j];
//		Tokens[j] = ptr1;
//		j--;
//
//	}
//
//	int leavingindex = 0;//It is for reaching to the end of the array so that after the reverse a nullterminator can be placed at that point
//
//	for (int i = 0;i < count;i++) {
//
//		StringConcatinate(Tokens[i], reversed, leavingindex);
//		if (i < count - 1) {
//			reversed[leavingindex++] = ' ';
//		}
//
//	}
//
//	reversed[leavingindex] = '\0';
//
//	return reversed;
//
//}
//
//int CompareString(char* str1, char* str2) {
//
//	for (int i = 0, j = 0;str1[i] != '\0' || str2[j] != '\0';i++, j++) 
//	{
//		if (str1[i] != str2[j])
//		{
//			if (str1[i] > str2[j])
//			{
//				return 1;
//			}
//			if (str1[i] < str2[j]) 
//			{
//				return 0;
//			}
//
//		}
//	}
//	return -1;
//}
//
//void DisplayStringList(char** StringList) {
//
//	for (int i = 0;i < 82;i++)
//	{
//		cout << i + 1 << ". " << StringList[i];
//		cout << endl;
//	}
//
//}
//
//char** BubbleSort(char** Array, const int& sizeofarr) {
//
//	char* temptr;
//
//	for (int i = 0;i < sizeofarr;i++)
//	{
//		for (int j = i + 1;j < sizeofarr;j++)
//		{
//			if (CompareString(Array[i], Array[j]))
//			{
//				temptr = Array[i];
//				Array[i] = Array[j];
//				Array[j] = temptr;
//			}
//		}
//	}
//
//	return Array;
//}
//
//int main() {
//
//	cout << "\n---------Question-1----------\n" << endl;
//	{
//		char temp1[1000], temp2[1000];
//
//		//Taking Input from the user
//		cout << "Enter string 1:\t";
//		cin.getline(temp1, 1000);
//
//		cout << "Enter string 2:\t";
//		cin.getline(temp2, 1000);
//
//		//Allocating Memory 
//		char* arr2 = new char[strlen(temp2) + 1];
//		stringcopy(arr2, temp2);
//
//		// the arr1 is the array where arr2 is to concatinate therefore allocating it the memory of (strlenarr1)+(strlenarr2)+1
//		char* arr1 = new char[strlen(temp1) + strlen(temp2) + 2];
//		stringcopy(arr1, temp1);
//
//		//String Concatination
//		StringConcatinate(arr1, arr2);
//		cout <<"\nOutput" << endl;
//		cout << "String 1: " << arr1 << endl;
//		cout << "String 2: " << arr2 << endl;
//
//		//Deallocating Memory
//		delete[] arr1;
//		delete[] arr2;
//	}
//
//	cout << "\n---------Question-2----------\n" << endl;
//
//	{
//		char temp[1000];
//		cout << "Enter a sentence: ";
//		cin.getline(temp, 1000);
//
//		int count = 0;
//
//		for (int i = 0;temp[i] != '\0';i++) {
//
//			if (temp[i] == ' ') {
//				count++;
//			}
//
//		}
//
//		count++;
//
//		char* arr = new char[strlen(temp) + 1];
//		//Copying the strings
//		stringcopy(arr, temp);
//		//Tokenization
//		char** Tokens = StringTokens(arr);
//
//		cout << "\nOutput" << endl;
//
//		for (int i = 0;i < count;i++) {
//
//			cout << Tokens[i] << endl;
//
//		}
//
//		//Deallocating Memory
//		for (int i = 0;i < count;i++) {
//
//			delete[] Tokens[i];
//
//		}
//		delete[] Tokens;
//		delete[] arr;
//	}
//	cout << "\n---------Question-3----------\n" << endl;
//	{
//		char temp[1000];
//		cout << "Enter a sentence: ";
//		cin.getline(temp, 1000);
//
//		char* ReverseArray = ReverseString(temp);
//		cout << "\nReverse cstring: ";
//		cout << ReverseArray;
//
//		//Deallocating the memory
//		delete[] ReverseArray;
//	}
//
//	cout << "\n---------Question-4----------\n" << endl;
//
//	{
//		char string1[1000], string2[1000];
//
//		//Taking Inputs from the user
//		cout << "Enter 1st string: ";
//		cin.getline(string1, 1000);
//		cout << "Enter 2nd string: ";
//		cin.getline(string2, 1000);
//
//		int returnvalue = CompareString(string1, string2);
//		if (returnvalue == -1) {
//			cout << 0;
//		}
//		else if (returnvalue == 0) {
//			cout << -1;
//		}
//		else {
//			cout << 1;
//		}
//		
//
//	}
//
//	cout << "\n---------Question-5----------\n" << endl;
//
//	{
//
//		ifstream file("Data.txt");
//		//Taking the number of Students in the file
//		int sizeofarr, result;
//		file >> sizeofarr;
//		file.ignore();
//		//Creating no of rows for the number of students in the file
//		char** ListofStudentsUnsorted = new char* [sizeofarr];
//		char arr[100];
//
//		for (int i = 0;i < sizeofarr;i++)
//		{
//			file.getline(arr, 100);
//			int size = strlen(arr);
//
//			ListofStudentsUnsorted[i] = new char[strlen(arr) + 1];
//
//			for (int j = 0;j < size + 1;j++)
//			{
//				ListofStudentsUnsorted[i][j] = arr[j];
//				if (j == size)
//				{
//					ListofStudentsUnsorted[i][j] = '\0';
//				}
//			}
//		}
//
//		//Function to DIsplay the names of the students stored in the array
//		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//		cout << "\t\t\t\t\t\tUN-Sorted Array\t\t\t\t" << endl;
//		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//		DisplayStringList(ListofStudentsUnsorted);
//
//		//Function to sort the array
//		char** SortedArray = BubbleSort(ListofStudentsUnsorted, sizeofarr);
//
//		//Display Sorted Array
//		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//		cout << "\t\t\t\t\t\tSorted Array\t\t\t\t" << endl;
//		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//		DisplayStringList(SortedArray);
//
//		//Deallocating Memory
//		delete[] SortedArray;
//
//		for (int i = 0; i < sizeofarr; i++) {
//
//			delete[] ListofStudentsUnsorted[i];
//
//		}
//		delete[] ListofStudentsUnsorted;
//
//	}
//
//}