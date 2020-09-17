#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int ReadDials(char&,char&,char&,char&,char&,char&,char&,char&); //reads each number and letter
int ToDigit(char&); //convert letter to number
void AcknowledgeCall(char, char, char, char, char, char, char, char); //

int main()
{
    char digit1 = ' ', digit2 = ' ', digit3 = ' ', digit4 = ' ', digit5 = ' ', digit6 = ' ', digit7 = ' ', digit8 = ' ';
    int checkValue = 1;
    while (checkValue != 5)
    {
        checkValue = ReadDials(digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8);
        
        switch (checkValue)
        {
            case 0:
                AcknowledgeCall(digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8);
                break;
                
            case -1:
                cout << "ERROR - An invalid charcter was entered." << endl;
                break;
                
            case -2:
                cout << "ERROR - Phone number cannot begin with 0." << endl;
                break;
                
            case -3:
                cout << "ERROR - Phone number cannot begin with 555." << endl;
                break;
                
            case -4:
                cout << "ERROR - Hyphen is not in the correct position." << endl;
                break;
                
            case -5:
                cout << "Application quit." << endl;
                return 0;
                
            default:
                break;
                
        }
    }
    return 0;
}

int ReadDials(char& readDial1, char& readDial2, char& readDial3, char& readDial4, char& readDial5, char& readDial6, char& readDial7, char& readDial8)
{
    cout << "Enter a phone number. (Q to quit): ";
    cin >> readDial1;
    
    if (readDial1 == 'Q' || readDial1 == 'q')
        return -5;
    
    cin >> readDial2 >> readDial3 >> readDial4 >> readDial5 >> readDial6 >> readDial7 >> readDial8;
    
    if (readDial1 == '0')
        return -2;
    
    if (readDial1 == '5' && readDial2 == '5' && readDial3 == '5')
        return -3;
    
    if (readDial4 != '-')
        return -4;
    
    if (ToDigit(readDial1) == 0 && ToDigit(readDial2) == 0 && ToDigit(readDial3) == 0 && ToDigit(readDial4) == 0 && ToDigit(readDial5) == 0 && ToDigit(readDial6) == 0 && ToDigit(readDial7) == 0 && ToDigit(readDial8) == 0)
        return 0;
    
    else
        return -1;
    
}

int ToDigit(char& digit)
{
    digit = toupper(digit);
    switch(digit)
    {
        case 'A': digit = '2';
        case 'B': digit = '2';
        case 'C': digit = '2';
            return 0;
            break;
            
        case 'D': digit = '3';
        case 'E': digit = '3';
        case 'F': digit = '3';
            return 0;
            break;
            
        case 'G': digit = '4';
        case 'H': digit = '4';
        case 'I': digit = '4';
            return 0;
            break;
            
        case 'J': digit = '5';
        case 'K': digit = '5';
        case 'L': digit = '5';
            return 0;
            break;
            
        case 'M': digit = '6';
        case 'N': digit = '6';
        case 'O': digit = '6';
            return 0;
            break;
            
        case 'P': digit = '7';
        case 'Q': digit = '7';
        case 'R': digit = '7';
        case 'S': digit = '7';
            return 0;
            break;
            
        case 'T': digit = '8';
        case 'U': digit = '8';
        case 'V': digit = '8';
            return 0;
            break;
            
        case 'W': digit = '9';
        case 'X': digit = '9';
        case 'Y': digit = '9';
        case 'Z': digit = '9';
            return 0;
            break;
            
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '-':
            return 0;
            break;
            
        default:
            return -1;
            break;
    }
}

void AcknowledgeCall(char digit1, char digit2, char digit3, char digit4, char digit5, char digit6, char digit7, char digit8)
    {
        cout << "Phone Number Dialed: " << digit1 << digit2 << digit3 << digit4 << digit5 << digit6 << digit7 << digit8 << endl;
    }
