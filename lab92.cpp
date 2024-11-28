#include <iostream>
using namespace std;
int main()
 {
    int num1, num2, result;
    char operator;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operator;
    cout << "Enter the second number: ";
    cin >> num2;
    switch (operator)
     {
        case '+':
        result= num1 + num2;
        cout<< "Result: "<< result<<endl;
        break;
        case '-':
        result= num1 - num2;
        cout<< "Result: "<< result<<endl;
         break;
        case '*':
        result= num1 * num2;
        cout<< "Result: "<< result<<endl;
        break;
        case '/':
        result= num1 / num2;
        cout<< "Result:"<<result<<endl;

        default:
            cout<<"Error: Invalid operator."<<endl;
    }

    return 0;
}
