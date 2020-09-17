#ifndef _roundemup_h_
#define _roundemup_h_

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

double data(int dataPoint[], int loop)
{
    int minimum = dataPoint[0];
    int maximum = dataPoint[0];
    double sum = 0;

    for(int i = 0; i < loop; i++)
    {
        if (dataPoint[i] < minimum)
            minimum = dataPoint[i];
        if (dataPoint[i] < maximum)
            maximum = dataPoint[i];
        sum += dataPoint[i];
    }

    double average = (sum / loop);

    cout << "Count: " << loop << endl;
    cout << "Minimum: " << minimum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << maximum << endl;
}

void standardDeviation(int dataPoint[], int loop, double average)
{
    double standardDeviation = 0;
    for (int i = 0; i < loop; i++)
    standardDeviation += pow((dataPoint[i] - average),2);
    standardDeviation = sqrt(1 / (double)loop * standardDeviation);

    cout << "StdDev: " << standardDeviation << endl;
}
#endif