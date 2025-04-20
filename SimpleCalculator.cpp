#include <iostream>
#include <cmath>
using namespace std;

float add(float a, float b); // addition
float subtract(float a, float b); // subtraction
float multiply(float a, float b); // multiplication
float divide(float a, float b); // division


int main()
{
    float num1, num2;
    char op;
    float result;
    
    // program start

    // ask for the numbers + operator
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the operation: ";
    cin >> op;
    cout << "Please enter the second number: ";
    cin >> num2;

    // perform the operations
    switch (op)
    {
    case '+':
        result = add(num1, num2);
        break;

    case '-':
        result = subtract(num1, num2);
        break;

    case '*':
        result = multiply(num1, num2);
        break;

    case '/':
        result = divide(num1, num2);
        break;

    default:
        cout << "Invalid operation!\n";
        return 1;
    }
    
    cout << "The result is: " << result << endl;

    return 0;
}

// function declarations
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        cout << "Division by 0 not allowed!\n";
        return NAN;
    }
    return a/b;
}