#include <iostream>
using namespace std;

void addition(int a, int b) {
    cout << "Result: " << a + b << endl;
}

void difference(int a, int b) {
    cout << "Result: " << a - b << endl;
}

int main() {
    int a, b, choice;
    cout << "Enter num 1: ";
    cin >> a;
    cout << "Enter num 2: ";
    cin >> b;
    
    cout << "Choose operation:\n1. Addition\n2. Difference\n";
    cin >> choice;

    if (choice == 1) {
        addition(a, b);
    }
    else if (choice == 2) {
        difference(a, b);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
