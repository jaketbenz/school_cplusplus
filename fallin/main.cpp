#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "\nWelcome to the Roster Generator Program!!!" << endl;
    char fileName[10];
    cout << "Please enter the name of your names file: ";
    cin >> fileName;
    ifstream inFile(fileName);
    while(!inFile)
    {
        cout << "I'm sorry, I could not open '" << fileName << "'. Please enter another name:\n";
        cin >> fileName;
        inFile.open(fileName);
    }
    cout << "File '" << fileName << "' opened successfully!\n\n";
        cout 
    << left << setw(18) << " Name" << "|" 
    << left << setw(19) << " Major" << " |" 
    << left << setw(14) << " Phone" << " |" 
    << left << setw(18) << " Town" << "\n";

    string name, major, phone, address, town, number;
    cout << "------------------+--------------------+---------------+-------------------\n";
    getline(inFile, name);  
    getline(inFile, number);
    getline(inFile, address);
    getline(inFile, town);
    getline(inFile, phone);
    getline(inFile, major);

    int i = 0;
    while (i < 10)   
    {
        while(getline(inFile, name))
        {
            major = "";
            phone = "";
            town = "";
            getline(inFile, number);
            getline(inFile, address);
            getline(inFile, town);
            getline(inFile, phone);
            getline(inFile, major);
            cout
            << left << setw(18) << name.substr(0,18) << "| " 
            << left << setw(19) << major.substr(0,18) << "| " 
            << left << setw(14) << phone.substr(0,13) << "| " 
            << left << setw(18) << town.substr(0,18) << "\n";
        }
        i = i + 1;
        cout << "Total enrollment: " << i << endl;
    }
   return 0;
}
