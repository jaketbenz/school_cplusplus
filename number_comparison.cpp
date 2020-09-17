#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout << "Enter a numeric value: ";
    cin >> firstNumber;
    cout << "Enter a second numeric value: ";
    cin >> secondNumber;
    
    if (firstNumber == secondNumber)
    {
        cout << "They are equal" << endl;
    }
    
    else if (firstNumber > secondNumber)
        cout << "The smallest value is " << secondNumber << endl;

    else if (secondNumber > firstNumber)
        cout << "The smallest value is " << firstNumber << endl;
    
    return 0;
}
