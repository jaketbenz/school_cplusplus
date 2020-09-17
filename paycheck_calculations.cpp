#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Weekly_Sales;
    float Total_Sales;
    float Gross_pay;
    float FedTax_paid;
    float SS_paid;
    float Retire_cont;
    float Total_deduct;
    float Take_home;
    
    cout << fixed << setprecision(2);
    
    cout << "Enter Weekly Sales: ";
    cin >> Weekly_Sales;
    
    Total_Sales = Weekly_Sales;
    cout << "Total Sales:\t\t $" << setw(8) << Total_Sales << endl;
    
    Gross_pay = Total_Sales * .08;
    cout << "Gross Pay (8%):\t\t $" << setw(8) << Gross_pay << endl;
    
    FedTax_paid = Gross_pay * .16;
    cout << "Federal tax paid:\t $" << setw(8) << FedTax_paid << endl;
    
    SS_paid = Gross_pay * .06;
    cout << "Social security paid:\t $" << setw(8) << SS_paid << endl;
    
    Retire_cont = Gross_pay * .08;
    cout << "Retirement contribution: $" << setw(8) << Retire_cont << endl;
    
    Total_deduct = FedTax_paid + SS_paid + Retire_cont;
    cout << "Total deductions:\t $" << setw(8) << Total_deduct << endl;
    
    Take_home = Gross_pay - Total_deduct;
    cout << "Take Home Pay:\t\t $" << setw(8) << Take_home << endl;
    
    return 0;
}
