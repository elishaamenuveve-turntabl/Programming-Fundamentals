#include <iostream>

using namespace std;

int main() {
    /* Write a program that prompts for two arguments and an operator. 
    Using a switch statement, evaluate the expression formed by the operator 
    and operands.*/

    // add checks for validity

    float operand1, operand2;
    char mathOperator;

    while (mathOperator != 'q') {
        cout << "Please input two operands: ";
        cin >> operand1 >> operand2;

        cout << "Please input an operator: ";
        cin >> mathOperator;

        
        switch (mathOperator)
        {
        case '*':
            cout << "Multiplying " << operand1 << " and " << operand2 << " = " << operand1 * operand2 << endl;
            break;
        
        case '+':
            cout << "Adding " << operand1 << " and " << operand2 << " = " << operand1 + operand2 << endl;
            break;
        
        case '-':
            cout << "Subtracting " << operand2 << " and " << operand1 << " = " << operand1 - operand2 << endl;
            break;
        
        case '/':
            cout << "Dividing " << operand1 << " by " << operand2 << " = " << operand1/operand2 << endl;
            break;
        
        default:
            cout << "Invalid operator entered";
            break;
        }
    }



    return 0;
}