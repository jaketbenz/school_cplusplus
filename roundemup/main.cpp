#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "roundemup.h"

using namespace std;

double data(int dataPoint[], int loop);
void standardDeviation(int dataPoint[], int loop, double average);

int main()
{
    string file_name;
    int dataPoint[1000];
    int loop = 0;
    cout << "Welcome to the Number Statistics Program!" << endl;
    cout << "Please enter the name of your data file: " << endl;
    
    cin >> file_name;
    ifstream file;
    file.open(file_name);
    while (!file.is_open()) 
    {
        cout << "Unable to Process File." << endl;
        cout << "Please try again: " << endl;
        cin >> file_name;
    }

    cout << "File " << file_name << " opened succesfully!" << endl;
    cout << "Reading data from " << file_name << "..." << endl;

    while (!file.eof())
    {
        file >> dataPoint[loop++];
    }
    cout << "Calculating..." << endl;
    cout << "Done processing data!" << endl;
    cout << "For your data, the statistics are as follows: " << endl;

    double average = 0;
    average = data(dataPoint,loop);
    standardDeviation(dataPoint, loop, average);
}