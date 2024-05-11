#include <iostream>
#include <cmath>

using namespace std;

// Structure to represent a fraction
struct Fraction {
    long long numerator;
    long long denominator;
};

// Function to calculate the greatest common divisor (GCD)
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to simplify a fraction
void simplifyFraction(Fraction& frac) {
    long long common = gcd(abs(frac.numerator), abs(frac.denominator));
    frac.numerator /= common;
    frac.denominator /= common;

    if (frac.denominator < 0) {
        frac.numerator *= -1;
        frac.denominator *= -1;
    }
}

// Function to multiply two fractions
Fraction multiplyFractions(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    simplifyFraction(result);
    return result;
}

int main() {
    int numTests;
    cin >> numTests;

    while (numTests--) {
        Fraction a, b;
        cin >> a.numerator >> a.denominator >> b.numerator >> b.denominator;

        Fraction result = multiplyFractions(a, b);

        if (result.denominator == 0) {
            cout << "INVALID" << endl;
        } else if (result.denominator == 1) {
            cout << result.numerator << endl;
        } else {
            cout << result.numerator << " " << result.denominator << endl;
        }
    }

    return 0;
}
