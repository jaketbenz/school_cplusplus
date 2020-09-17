#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char grade;
    char sign;
    float gradeValue;
    float signValue;
    float outputValue;
    
    cout << "Insert letter grade: " << endl;
    //cin >> grade >> sign;
    grade = getchar();
    sign = getchar();
    
    if (grade == 'A')
        gradeValue = 4.0;
    else if (grade == 'B')
        gradeValue = 3.0;
    else if (grade == 'C')
        gradeValue = 2.0;
    else if (grade == 'D')
        gradeValue = 1.0;
    else if (grade == 'F')
        gradeValue = 0.0;
    
    if (sign == '+')
        signValue = +0.3;
    else if (sign == '-')
        signValue =  -0.3;
    else
        signValue = 0.0;

    outputValue = gradeValue + signValue;
    
    //Blocker for A+, F+, F-
    if (outputValue > 4.0)
        outputValue = 4.0;
    else if (outputValue < 0.69)
        outputValue = 0.0;
    
    cout << setprecision(2) << fixed << " " << outputValue << endl;
    
    return 0;
}
