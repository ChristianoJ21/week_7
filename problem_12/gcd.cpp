#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) 
        return a; // Base Case
    else
        return gcd(b, a % b); // Recursive Case
}

int main() {
    int a, b;
    cout << "Enter num 1: ";
    cin >> a;
    cout << "Enter num 2: ";
    cin >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
