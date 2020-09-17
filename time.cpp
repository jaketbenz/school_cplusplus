#include <iostream>

using namespace std;

int main()
{
    int time_1 = 0;
    int time_2 = 0;
    int hours;
    int minutes;
    int result;
    
    cout << "Please enter the first time: ";
    cin >> time_1;
    cout << "Please enter the second time: ";
    cin >> time_2;
    
    if(time_1 > time_2) {
        result = time_1 - time_2;
    }
    else
        result = time_2 - time_1;
    
    hours = result / 100;
    minutes = result % 100;
    
    cout << endl << hours << " hours " << minutes << " minutes " << endl;
    
    return 0;
}
