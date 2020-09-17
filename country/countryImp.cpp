#include <iostream>
#include <string>
#include "country.h"
using namespace std;

country::country()
{
    countryName = "";
    area = 0;
    population = 0;
}

country::country(string name, int a, int p)
{
    setName(name);
    setArea(a);
    setPopulation(p);
}

country::~country()
{
}

void country::print()
{
    cout << getName() << "\t" << getArea() << "\t" << getPopulation() << endl;
}
void country::getInput()
{
    cout << "Enter the Country's name (No spaces) or QUIT to finish: ";
    getline(cin, countryName);
    cin >> area;
    cin >> population;
    cin.ignore();
}

string country::getName()
{
    return countryName;
}
int country::getArea()
{
    return area;
}
int country::getPopulation()
{
    return population;
}


void country::setName(string name)
{
    countryName = name;
}
void country::setArea(int a)
{
    area = a;
}
void country::setPopulation(int p)
{
    population = p;
}
