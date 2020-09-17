#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount;
    
    cout << "What is the amount being purchased?";
    cin >> purchaseAmount;
    
    if ((purchaseAmount >= 0.00) && (purchaseAmount < 250.00))
        cout << "Shipping cost is $5.00." << endl;
    else
    {
        if ((purchaseAmount >= 250.01) && (purchaseAmount < 500.00))
            cout << "Shipping cost is $8.00." << endl;
        else
        {
            if ((purchaseAmount >= 500.01) && (purchaseAmount < 1000.00))
                cout << "Shipping cost is $10.00." << endl;
            else
            {
                if ((purchaseAmount >= 1000.01) && (purchaseAmount < 5000.00))
                    cout << "Shipping cost is $15.00." << endl;
                else
                    cout << "Shipping cost is $20.00" << endl;
            }
        }
    }
}
