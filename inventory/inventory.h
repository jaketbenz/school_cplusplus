#include <iostream>
#include <iomanip>

using namespace std;

class Inventory                 //Inventory Class
{
private:
    int ItemNumber;             //Private members
    int Quantity;
    float Cost;
    float TotalCost;
public:
    Inventory();                //Default constructor
    Inventory(int, int, float); //Overloaded constructor

    void setItemNumber(int);    //Function prototypes
    void setQuantity(int);
    void setCost(float);
    void setTotalCost();
    int getItemNumber();
    int getQuantity();
    float getCost();
    float getTotalCost();
};
