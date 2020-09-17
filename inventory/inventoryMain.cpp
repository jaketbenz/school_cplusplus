#include "inventory.h"

int main()
{
    Inventory item1;                    //Create object using default constructor
    Inventory item2(777,10,12.50);      //Create object using overloaded constructor with given values from Assignment

    item1.setTotalCost();               //Calculating TotalCost for each item
    item2.setTotalCost();

    cout << fixed << setprecision(2);   //Setting precision to 2 decimal places for cost display formatting

    cout << "Default item Number: " << item1.getItemNumber() << endl;           //Displaying default object members
    cout << "Default item Quantity: " << item1.getQuantity() << endl;
    cout << "Default item Cost: $" << item1.getCost() << endl;
    cout << "Default item Total Cost: $" << item1.getTotalCost() << endl << endl;

    cout << "Overloaded item Number: " << item2.getItemNumber() << endl;        //Displaying overloaded object members
    cout << "Overloaded item Quantity: " << item2.getQuantity() << endl;
    cout << "Overloaded item Cost: $" << item2.getCost() << endl;
    cout << "Overloaded item Total Cost: $" << item2.getTotalCost() << endl << endl;

    item2.setItemNumber(686);   //Setting overloaded object members to new random values
    item2.setQuantity(8);
    item2.setCost(11.99);
    item2.setTotalCost();       //Recalculating total cost with new values

    item2.setItemNumber(-1);    //Negative input test. Functions output error messages instead of setting new member values
    item2.setQuantity(-5);
    item2.setCost(-3.95);

    cout << "Modified Overloaded item Number: " << item2.getItemNumber() << endl;    //Displaying modified overloaded object members
    cout << "Modified Overloaded item Quantity: " << item2.getQuantity() << endl;
    cout << "Modified Overloaded item Cost: $" << item2.getCost() << endl;
    cout << "Modified Overloaded item Total Cost: $" << item2.getTotalCost() << endl << endl;

    return 0;
}
