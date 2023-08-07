#include "examples.h"

//FUNCTION DEFINITIONS
void exercise1() {
    string dogName;
    int dogAge;
    cout << "\nExercise 1: C++ Input & Output\n";
    cout << "Hello! Please enter the name of your dog: ";
    cin >> dogName;

    cout << "How old is " << dogName << "?  ";
    cin >> dogAge;

    cout << "That means " << dogName << " is " << dogAge << " in dog years and "
        << dogAge * 7 << " in people years." << endl << endl;
}

void exercise2() {
    int a, b;
    float quotient;
    cout << "\nExercise 2: C++ Output Formatting\n";
    cout << "Unformatted: " << 2.3891918182020 << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Formatted:   " << 2.3891918182020 << endl;
}

void exercise3() {
    int a, b, intQuotient;
    float quotient;
    cout << "\nExercise 3: C++ Integer Division, Static_Cast, Modulus\n";
    cin.clear();
    cout << "Please enter two numbers: ";
    cin >> a >> b;
    intQuotient = a / b;
    cout << "The quotient of " << a << " and " << b << " is " << intQuotient << "    --- integer division\n";
    quotient = a / static_cast<double>(b);
    cout.precision(2);
    cout << "The quotient of " << a << " and " << b << " is " << quotient << " --- with static cast" << endl;
    cout << "The remainder of " << a << " and " << b << " is " << a % b << endl;

}