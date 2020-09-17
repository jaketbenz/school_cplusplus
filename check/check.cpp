#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const double FEE = 0.25;
    
    double bal,   
    totSrvcChrg=0;
    double transactionAmt,
    finalBal;
    int ServChrgeNum = 0;
    double fixed,showpoint;
  
    char ch;

    cout <<fixed <<showpoint<< setprecision (2);
    cout <<"Checkbook Balancing\n";
    cout <<"Enter the beginning bal: \n";
    cin>> bal;
    cout <<endl;
    
    do
    {
        cout << "Commands:\n";
        cout << "C - process a check\n";
        cout << "D - process a deposit\n";
        cout << "E - end the program\n";
        cout << "Enter transaction type: ";
        cin >> ch;
        cout << endl;
    
        while ((ch < 'C')|| (ch > 'E') )
        {
            cout <<"Please enter the values in Caps (C,D,E)\n";
            cout <<"Enter the selection with care\n";
            cin >> ch;
        }     
        if (ch != 'E')
        { 
            cout << "Enter transaction amount: ";
            cin >> transactionAmt;
        }
        while (transactionAmt <=0)
        {   
            cout << "Please enter an positive number: ";
            cin >>transactionAmt;
        }
        
        if (ch == 'C')
        {
            cout << "Process a check for : $"<<transactionAmt<<"\n";
            bal -= transactionAmt;
            cout << "bal: $" << bal<<"\n";
            cout << "The service charge is : $0.25 for a check\n";
            ServChrgeNum++;
            totSrvcChrg= ServChrgeNum * FEE;
            cout << "The total service charge is of : $ "<<totSrvcChrg;
            cout <<endl;
            cout <<endl;
        }
        if (ch == 'D')
        {
            cout << "Process deposit for: $"<<transactionAmt <<"\n";
            bal += transactionAmt;
            cout << "bal: $" << bal<<"\n";
            cout << "Total Service Charges till now: $"<<totSrvcChrg<<"\n";
            cout <<endl;
            cout <<endl;    
        }
    } 
    while (ch != 'E');
    
    if (ch == 'E')
    {
        cout << "End of Month balance\n";
        finalBal = bal - totSrvcChrg;
        cout << "Final balance: $" << finalBal;
    }
    return 0; 
}