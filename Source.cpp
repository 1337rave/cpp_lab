#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 < num2) {
        cout << " A smaller number: " << num1 << endl;
    }
    else {
        cout << " A smaller number: " << num2 << endl;
    }
    return 0;
}
