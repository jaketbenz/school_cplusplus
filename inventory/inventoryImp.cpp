#include "inventory.h"

Inventory::Inventory()  //Default constructor using random default values
{
    ItemNumber = 42;
    Quantity = 3;
    Cost = 5.76;
}

Inventory::Inventory(int i, int q, float c) //Overloaded constructor assigning values passed from main()
{
    ItemNumber = i;
    Quantity = q;
    Cost = c;
}

void Inventory::setItemNumber(int i)
{
    if(i < 0)
    {
        cout << "ERROR: Item Number can not be negative." << endl << endl;
        return;
    }
    ItemNumber = i;
    return;
}

void Inventory::setQuantity(int q)
{
    if(q < 0)
    {
        cout << "ERROR: Quantity can not be negative." << endl << endl;
        return;
    }
    Quantity = q;
    return;
}

void Inventory::setCost(float c)
{
    if(c < 0)
    {
        cout << "ERROR: Cost can not be negative." << endl << endl;
        return;
    }
    Cost = c;
    return;
}

void Inventory::setTotalCost()
{
    TotalCost = Quantity * Cost;
    return;
}

int Inventory::getItemNumber()
{
    return ItemNumber;
}

int Inventory::getQuantity()
{
    return Quantity;
}

float Inventory::getCost()
{
    return Cost;
}

float Inventory::getTotalCost()
{
    return TotalCost;
}
