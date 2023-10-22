#include <iostream>
using namespace std;	

int main()
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	if (num1 == num2) {
    cout << num1 << " is equal to " << num2 << endl;
	}else {
		cout << "The entered numbers are not equal." << endl;
	}
	if (num1 < num2) {
		cout << "The numbers are in ascending order: " << num1 << ", " << num2 << endl;
	}
	else {
		cout << "The numbers are in ascending order: " << num2 << ", " << num1 << endl;
	}
	return 0;
}
