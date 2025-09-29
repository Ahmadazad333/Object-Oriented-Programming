//#include <iostream>
//using namespace std;
//
//class DynamicMatrix {
//private:
//    int** matrix;
//    int rows, cols;
//
//    void initializeMatrix() {
//        matrix = new int* [rows];
//        for (int i = 0; i < rows; i++) {
//            matrix[i] = new int[cols] {0};
//        }
//    }
//
//public:
//    DynamicMatrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
//        initializeMatrix();
//    }
//
//    ~DynamicMatrix() {
//        for (int i = 0; i < rows; i++) {
//            delete[] matrix[i];
//        }
//        delete[] matrix;
//    }
//
//    void setValue(int row, int col, int value) {
//        if (row >= 0 && row < rows && col >= 0 && col < cols) {
//            matrix[row][col] = value;
//        }
//    }
//
//    int getValue(int row, int col) const {
//        if (row >= 0 && row < rows && col >= 0 && col < cols) {
//            return matrix[row][col];
//        }
//        return -1; 
//    }
//
//    void display() const {
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < cols; j++) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    void resize(int newRows, int newCols) {
//        int** newMatrix = new int* [newRows];
//        for (int i = 0; i < newRows; i++) {
//            newMatrix[i] = new int[newCols] {0};
//        }
//
//        int minRows = (rows < newRows) ? rows : newRows;
//        int minCols = (cols < newCols) ? cols : newCols;
//
//        for (int i = 0; i < minRows; i++) {
//            for (int j = 0; j < minCols; j++) {
//                newMatrix[i][j] = matrix[i][j];
//            }
//        }
//
//        for (int i = 0; i < rows; i++) {
//            delete[] matrix[i];
//        }
//        delete[] matrix;
//
//        matrix = newMatrix;
//        rows = newRows;
//        cols = newCols;
//    }
//};
//
//int main() {
//    int rows, cols;
//    cout << "Enter number of rows and columns: ";
//    cin >> rows >> cols;
//
//    DynamicMatrix mat(rows, cols);
//    mat.display();
//
//    mat.setValue(0, 0, 5);
//    mat.setValue(1, 1, 10);
//    mat.display();
//
//    cout << "Enter new rows and columns for resizing: ";
//    cin >> rows >> cols;
//    mat.resize(rows, cols);
//    mat.display();
//
//    return 0;
//}