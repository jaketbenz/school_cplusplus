#include <iostream>
#include <math.h>
#include "rational_numbers.h"
using namespace std;

int main()
{
    rational_number R1(1,2);
    cout << "R1 is, in fractional: ";
    R1.output(cout);
    cout << endl;
    cout << "R1 is, in decimal: ";
    R1.decimal(cout);
    cout << endl;

    rational_number R2;
    cout << "Enter numerator and denominator for R2:" << endl;
    R2.input(cin);
    cout << endl;
    cout << "R2, in fractional, is: ";
    R2.output(cout);
    cout << endl;
    cout << "R2, in decimal, is: "; 
    R2.decimal(cout);
    cout << endl;

    rational_number R3 = addition(R1,R2);
    cout << "Addition of R1 and R2, in fractional, is: ";
    R3.output(cout);
    cout << endl;
    cout << "Addition of R1 and R2, in decimal, is: ";
    R3.decimal(cout);
    cout << endl;

    rational_number R4 = subtraction(R1,R2);
    cout << "Subtraction of R1 and R2, in fractional, is: ";
    R4.output(cout);
    cout << endl;
    cout << "Subtraction of R1 and R2, in decimal, is: ";
    R4.decimal(cout);
    cout << endl;

    rational_number R5 = multiplication(R1,R2);
    cout << "Multiplication of R1 and R2, in fractional, is: ";
    R5.output(cout);
    cout << endl;
    cout << "Multiplication of R1 and R2, in decimal, is: ";
    R5.decimal(cout);
    cout << endl;

    rational_number R6 = division(R1,R2);
    cout << "Division of R1 and R2, in fractional, is: ";
    R6.output(cout);
    cout << endl;
    cout << "Division of R1 and R2, in decimal, is: ";
    R6.decimal(cout);
    cout << endl;
    
    //Overloading??
    rational_number R7 = addition(R1, 5);
    cout << "Addition of R1 and 5, is: ";
    R7.output(cout);
    cout << endl;
    cout << "Addition of R1 and 5, in decimal, is: ";
    R7.decimal(cout);
    cout << endl;

    if(equal(R1,R2))
        cout << "R1 and R2 are equal." << endl;
    else
    {
        cout << "R1 and R2 are not equal." << endl;

        if(less_than(R1,R2))
            cout << "R1 is less than R2." << endl;
        else
            cout << "R1 is more than R2." << endl;
    }
     return 0;
} 