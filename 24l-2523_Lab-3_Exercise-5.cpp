//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int FirstIndexOfSubString(char* myStr, char* strToFind) {
//    int strLen = strlen(myStr);
//    int findLen = strlen(strToFind);
//
//    for (int i = 0; i <= strLen - findLen; i++) {
//        int j;
//        for (j = 0; j < findLen; j++) {
//            if (myStr[i + j] != strToFind[j]) {
//                break;
//            }
//        }
//        if (j == findLen) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    char myStr[256], strToFind[256];
//
//    cout << "Enter the main string: ";
//    cin.getline(myStr, 256);
//
//    cout << "Enter the substring to find: ";
//    cin.getline(strToFind, 256);
//
//    int index = FirstIndexOfSubString(myStr, strToFind);
//    cout << "Index of '" << strToFind << "': " << index << endl;
//
//    return 0;
//}
