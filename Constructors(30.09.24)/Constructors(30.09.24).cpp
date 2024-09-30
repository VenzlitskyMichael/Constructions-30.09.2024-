#include <iostream>
using namespace std;

class Fraction {
private:
    int numer;   
    int denom; 
public:
    Fraction() : numer(0), denom(1) {

    }
    Fraction(int num, int den) {
        if (den == 0) {
            throw invalid_argument("Znemen no be zero.");
        }
        numer = num;
        denom = den;
    }
    void display() const {
        cout << numer << "/" << denom << endl;
    }
};

int main() {
    try {
        Fraction fraction1;
        Fraction fraction2(3, 4);
        cout << "Drob 1: ";
        fraction1.display();
        cout << "Drob 2: ";
        fraction2.display();
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

}



