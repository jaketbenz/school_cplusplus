#include <iostream>
#include <fstream>

using namespace std;

void read(ifstream& file, char arr[3][30])
{
    char temp;

    file.open("RainOrShine.txt");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 30; j++)
        {
            file >> temp;
            arr[i][j] = temp;
        }
    }

    file.close();

    return;
}

void print(char arr[3][30])
{
    int j = 0, r = 0, c = 0, s = 0, tr = 0, tc = 0, ts = 0;
    char temp = ' ';

    cout << "    Summer Weather Report" << endl << endl;
    cout << "Month" << '\t' << "Rainy" << '\t' << "Cloudy" << '\t' << "Sunny" << endl;
    cout << "____________________________" << endl;

    for(j = 0; j < 30; j++)
    {
       temp = arr[0][j];

       switch (temp)
       {
           case 'R': r++; break;
           case 'C': c++; break;
           case 'S': s++; break;
       }
    }

    cout << "June" << '\t' << r << '\t' << c << '\t' << s << endl;

    tr += r; tc += c; ts += s;
    r = 0; c = 0; s = 0;

    for(j = 0; j < 30; j++)
    {
       temp = arr[1][j];

       switch (temp)
       {
           case 'R': r++; break;
           case 'C': c++; break;
           case 'S': s++; break;
       }
    }

    cout << "July" << '\t' << r << '\t' << c << '\t' << s << endl;

    tr += r; tc += c; ts += s;
    r = 0; c = 0; s = 0;

    for(j = 0; j < 30; j++)
    {
       temp = arr[2][j];

       switch (temp)
       {
           case 'R': r++; break;
           case 'C': c++; break;
           case 'S': s++; break;
       }
    }

    tr += r; tc += c; ts += s;

    cout << "August" << '\t' << r << '\t' << c << '\t' << s << endl;
    cout << "____________________________" << endl;
    cout << "Totals" << '\t' << tr << '\t' << tc << '\t' << ts << endl << endl;
    cout << "June = 0" << '\t' << "July = 1" << '\t' << "August = 2" << endl;
    cout << "Sunny = S" << '\t' << "Cloudy = C" << '\t' << "Rainy = R" << endl << endl;

    return;
}

int typeDay(char arr[3][30], int MonthNum, char TypeOfDay)
{
    int dayCount = 0;

    for(int j = 0; j < 30; j++)
    {
        if(TypeOfDay == arr[MonthNum][j])
        {
            dayCount++;
        }
    }
    return dayCount;
}

int main()
{
    char WeatherArray[3][30];
    char TypeOfDay = ' ';
    int days = 0, MonthNum = 0;
    ifstream file;

    read(file,WeatherArray);
    print(WeatherArray);

    cout << "Please enter the month and type of days in that month you are looking for: ";
    cin >> MonthNum;
    cin >> TypeOfDay;

    days = typeDay(WeatherArray,MonthNum,TypeOfDay);

    switch (MonthNum)
    {
        case 0: cout << endl << "June had a total of " << days << " days." << endl; break;
        case 1: cout << endl << "July had a total of " << days << " days." << endl; break;
        case 2: cout << endl << "August had a total of " << days << " days." << endl; break;
    }

    return 0;
}
