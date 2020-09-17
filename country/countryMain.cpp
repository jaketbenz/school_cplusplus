#include <iostream>
#include <string>
#include "country.h"
using namespace std;

int main()
{
    string name;
    int population, area;
    int count = 0;
    const string SENTINEL="QUIT"; //code we have not learned yet. acts as
    
    country countries[100];
    
    cout << "Enter the Country's name (no spaces), or QUIT to finish: ";
    cin >> name;
    
    do
    {
        countries[count].setName(name);
        cout << "Enter the Population of " << name << ": ";
        cin >> population;
        countries[count].setPopulation(population);
        
        cout<<"Enter the area of "<<name<<" in square km: ";
        cin >> area;
        countries[count].setArea(area);
        count++;
        
        cout<<"Enter the Country's name (no spaces), or QUIT to finish: ";
        cin>>name;
    } while(name.compare(SENTINEL)!=0); //code we have not learned yet, used to != a string name. we've only learned for non-strings
    
    if (count > 0)
    {
        int largestPopulation = countries[0].getPopulation();
        int countryNumber = 0;
        for (int i = 0; i < count; i++)
        {
            if (largestPopulation < countries[i].getPopulation())
            {
                largestPopulation = countries[i].getPopulation();
                countryNumber = i;
            }
        }
        
        cout << countries[countryNumber].getName() << " has the largest population with " << countries[countryNumber].getPopulation() << " people."<<endl;
        cout << countries[countryNumber].getName() << " has the largest area with " << countries[countryNumber].getArea() << " square km." << endl;
        
        double density = ((double)countries[countryNumber].getPopulation() / countries[countryNumber].getArea() );
        cout << countries[countryNumber].getName() << " has the highest density with " << density << " per sq. km." << endl;
        
    }
}
