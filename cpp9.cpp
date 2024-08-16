#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    void input() {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        while (denominator == 0) {
            cout << "Invalid denominator! Enter a non-zero value: ";
            cin >> denominator;
        }
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }

    Fraction add(const Fraction& other) const {
        int result_num = numerator * other.denominator + other.numerator * denominator;
        int result_denom = denominator * other.denominator;
        return Fraction(result_num, result_denom);
    }

    Fraction subtract(const Fraction& other) const {
        int result_num = numerator * other.denominator - other.numerator * denominator;
        int result_denom = denominator * other.denominator;
        return Fraction(result_num, result_denom);
    }

    Fraction multiply(const Fraction& other) const {
        int result_num = numerator * other.numerator;
        int result_denom = denominator * other.denominator;
        return Fraction(result_num, result_denom);
    }

    Fraction divide(const Fraction& other) const {
        int result_num = numerator * other.denominator;
        int result_denom = denominator * other.numerator;
        return Fraction(result_num, result_denom);
    }
};

int main() {
    Fraction f1, f2, result;

    cout << "Enter first fraction:\n";
    f1.input();

    cout << "\nEnter second fraction:\n";
    f2.input();

    cout << "\nFirst fraction: ";
    f1.display();
    cout << "\nSecond fraction: ";
    f2.display();

    result = f1.add(f2);
    cout << "\n\nSum: ";
    result.display();

    result = f1.subtract(f2);
    cout << "\nDifference: ";
    result.display();

    result = f1.multiply(f2);
    cout << "\nProduct: ";
    result.display();

    result = f1.divide(f2);
    cout << "\nDivision: ";
    result.display();

    cout << endl;
    return 0;
}
