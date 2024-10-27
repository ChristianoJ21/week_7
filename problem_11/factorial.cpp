#include <iostream>
using namespace std;

int factorial(int x) {
    if (x < 0) {
        cout << "Undefined." << endl;
        return -1; 
    }
    if (x == 0 || x == 1) {
        return 1; // Base Case
    }
    else {
        return x * factorial(x - 1); // Recursive Case
    }
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int result = factorial(num);
    if (result != -1) {
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}
