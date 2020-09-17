#include <string>
using namespace std;

class country
{
public:
    string countryName;
    int area;
    int population;

    country();
    country(string, int, int);
    ~country();
    
    string getName();
    int getArea();
    int getPopulation();
    
    void setName(string);
    void setArea(int);
    void setPopulation(int);
    
    void print();
    void getInput();
};
