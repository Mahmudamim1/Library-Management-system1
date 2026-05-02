#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    cout << "------------------------------------" << endl;
    cout << "      Simple C++ Calculator         " << endl;
    cout << "------------------------------------" << endl;

    do {

        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;


        switch(op) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;

            case '/':

                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;

            default:
                cout << "Error: Invalid operator entered." << endl;
                break;
        }


        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator! Goodbye." << endl;

    return 0;
}
