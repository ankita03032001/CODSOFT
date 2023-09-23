#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "SIMPLE CALCULATOR" << endl;
    
    cout <<"---------------------------------------------------"<<endl;
   
    cout << "Enter the first number: ";
    cin >> num1;

  
    cout << "Enter an operation (+ for addition, - for subtraction, * for multiplication, / for division): ";
    cin >> operation;

  
    cout << "Enter the second number: ";
    cin >> num2;

   
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
    }

    return 0;
}
