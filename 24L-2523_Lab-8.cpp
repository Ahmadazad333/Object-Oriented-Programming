//#include <iostream>
//using namespace std;
//
//class Polynomial {
//private:
//    int totalTerms; // Total terms in a Polynomial
//    int* Coeff;     // Array of coefficients
//    int* exp;       // Array of exponents
//
//public:
//    Polynomial(int, int*, int*);
//    Polynomial(const Polynomial& other);
//    Polynomial& operator=(const Polynomial& other);
//    ~Polynomial();
//
//    friend ostream& operator<<(ostream& out, const Polynomial& P1);
//    bool operator!();
//    bool operator!=(const Polynomial&);
//    Polynomial operator+(const Polynomial&);
//    Polynomial& operator++();    
//    Polynomial operator++(int);  
//
//    friend Polynomial operator+(int constant, const Polynomial& poly);
//};
//
//Polynomial::Polynomial(int totalTerms, int* coefficient, int* exponent) {
//    this->totalTerms = totalTerms;
//    Coeff = new int[totalTerms];
//    exp = new int[totalTerms];
//
//    for (int i = 0; i < totalTerms; i++) {
//        Coeff[i] = coefficient[i];
//        exp[i] = exponent[i];
//    }
//}
//
//Polynomial::Polynomial(const Polynomial& other) {
//    totalTerms = other.totalTerms;
//    Coeff = new int[totalTerms];
//    exp = new int[totalTerms];
//
//    for (int i = 0; i < totalTerms; i++) {
//        Coeff[i] = other.Coeff[i];
//        exp[i] = other.exp[i];
//    }
//}
//
//Polynomial& Polynomial::operator=(const Polynomial& other) {
//    if (this != &other) {
//        delete[] Coeff;
//        delete[] exp;
//
//        totalTerms = other.totalTerms;
//        Coeff = new int[totalTerms];
//        exp = new int[totalTerms];
//
//        for (int i = 0; i < totalTerms; i++) {
//            Coeff[i] = other.Coeff[i];
//            exp[i] = other.exp[i];
//        }
//    }
//    return *this;
//}
//
//Polynomial::~Polynomial() {
//    delete[] Coeff;
//    delete[] exp;
//}
//
//bool Polynomial::operator!() {
//    for (int i = 0; i < totalTerms; i++) {
//        if (Coeff[i] != 0) return false;
//    }
//    return true;
//}
//
//bool Polynomial::operator!=(const Polynomial& obj) {
//    if (totalTerms != obj.totalTerms) return true;
//
//    for (int i = 0; i < totalTerms; i++) {
//        if (Coeff[i] != obj.Coeff[i] || exp[i] != obj.exp[i]) return true;
//    }
//    return false;
//}
//
//Polynomial Polynomial::operator+(const Polynomial& obj) {
//    int termsinP = totalTerms + obj.totalTerms;
//    int* Coeff_P = new int[termsinP];
//    int* exp_P = new int[termsinP];
//
//    int index = 0, i = 0, j = 0;
//
//    while (i < totalTerms && j < obj.totalTerms) {
//        if (exp[i] == obj.exp[j]) {
//            Coeff_P[index] = Coeff[i] + obj.Coeff[j];
//            exp_P[index] = exp[i];
//            i++; j++;
//        }
//        else if (exp[i] > obj.exp[j]) {
//            Coeff_P[index] = Coeff[i];
//            exp_P[index] = exp[i];
//            i++;
//        }
//        else {
//            Coeff_P[index] = obj.Coeff[j];
//            exp_P[index] = obj.exp[j];
//            j++;
//        }
//        index++;
//    }
//
//    while (i < totalTerms) {
//        Coeff_P[index] = Coeff[i];
//        exp_P[index] = exp[i];
//        i++; index++;
//    }
//
//    while (j < obj.totalTerms) {
//        Coeff_P[index] = obj.Coeff[j];
//        exp_P[index] = obj.exp[j];
//        j++; index++;
//    }
//
//    Polynomial result(index, Coeff_P, exp_P);
//    delete[] Coeff_P;
//    delete[] exp_P;
//    return result;
//}
//
//Polynomial operator+(int constant, const Polynomial& poly) {
//    int newSize = poly.totalTerms;
//    int* newCoeff = new int[newSize];
//    int* newExp = new int[newSize];
//
//    for (int i = 0; i < newSize; i++) {
//        newCoeff[i] = poly.Coeff[i];
//        newExp[i] = poly.exp[i];
//    }
//
//    bool constantAdded = false;
//    for (int i = 0; i < newSize; i++) {
//        if (newExp[i] == 0) {
//            newCoeff[i] += constant;
//            constantAdded = true;
//            break;
//        }
//    }
//
//    if (!constantAdded) {
//        newSize++;
//        int* tempCoeff = new int[newSize];
//        int* tempExp = new int[newSize];
//
//        for (int i = 0; i < newSize - 1; i++) {
//            tempCoeff[i] = newCoeff[i];
//            tempExp[i] = newExp[i];
//        }
//
//        tempCoeff[newSize - 1] = constant;
//        tempExp[newSize - 1] = 0;
//
//        delete[] newCoeff;
//        delete[] newExp;
//
//        newCoeff = tempCoeff;
//        newExp = tempExp;
//    }
//
//    Polynomial result(newSize, newCoeff, newExp);
//    delete[] newCoeff;
//    delete[] newExp;
//    return result;
//}
//
//ostream& operator<<(ostream& out, const Polynomial& P1) {
//    for (int i = 0; i < P1.totalTerms; i++) {
//        if (P1.exp[i] != 0 && P1.Coeff[i] != 0 && P1.Coeff[i] != 1)
//            cout << P1.Coeff[i] << "x^" << P1.exp[i];
//        else if (P1.exp[i] != 0 && P1.Coeff[i] != 0)
//            cout << "x^" << P1.exp[i];
//        else if (P1.exp[i] == 0 && P1.Coeff[i] != 0)
//            cout << P1.Coeff[i];
//
//        if (i < P1.totalTerms - 1 && P1.Coeff[i + 1] != 0)
//            cout << " + ";
//    }
//    return out;
//}
//
//Polynomial& Polynomial::operator++() {
//    for (int i = 0; i < totalTerms; i++) {
//        Coeff[i] += 1;
//    }
//    return *this;
//}
//
//Polynomial Polynomial::operator++(int) {
//    Polynomial temp = *this;
//    for (int i = 0; i < totalTerms; i++) {
//        Coeff[i]++;
//    }
//    return temp;
//}
//
//// Main Function
//int main() {
//    int coeff_P1[] = { 1,2,5 };
//    int exp_P1[] = { 4,2,0 };
//
//    int coeff_P2[] = { 4,3 };
//    int exp_P2[] = { 6,2 };
//
//    Polynomial P1(3, coeff_P1, exp_P1);
//    Polynomial P2(2, coeff_P2, exp_P2);
//
//    cout << "P1 = " << P1 << endl;
//    cout << "P2 = " << P2 << endl;
//
//    if (!P1) cout << "P1 is zero" << endl;
//    if (P1 != P2) cout << "P1 is Not Equal to P2" << endl;
//
//    Polynomial P3 = P1 + P2;
//    cout << "P3 = " << P3 << endl;
//
//    P3 = 2 + P1;
//    cout << "P3 = " << P3 << endl;
//
//    cout << ++P1 << endl;
//    cout << P1++ << endl;
//    cout << P1 << endl;
//
//    return 0;
//}
