#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char continueProgram = 'y';
    string diverName, diverCity;
    double highScore = 0;
    double lowScore = 0;
    double totalScore = 0;
    double difficulty = 0;
    double overallScore = 0;
    double judgeScore = 0;
    int divers = 0;
    
    cout << "Report to the media" << endl;
    cout << "Event: Diving Competition" << endl;
    
    while (continueProgram == 'Y' || continueProgram == 'y')
    {
        cout << "Enter the diver's name: ";
        getline(cin,diverName);
        cout << "Enter the diver's city: ";
        getline(cin,diverCity);
        
        for (int i = 0; i < 5; i++)
        {
            do
            {
                cout << "Enter the score given by judge#" << i+1 << ": ";
                cin >> judgeScore;
                
                if (judgeScore < 0 || judgeScore > 10)
                    cout << "Invalid score. Please re-enter. (Valdi range from 0 to 10)" << endl;
            }
            while (judgeScore < 0 || judgeScore > 10);
            if (highScore < judgeScore)
                highScore = judgeScore;
            if (i == 0)
                lowScore = judgeScore;
            if (lowScore > judgeScore)
                lowScore = judgeScore;
            overallScore += judgeScore;
        }
        overallScore -= highScore;
        overallScore -= lowScore;
        
        do
        {
            cout << "What was the degree of difficulty? " << endl;
            cin >> difficulty;
            if (difficulty < 1 || difficulty > 1.67)
                cout << "Invalid degree of difficulty - Please re-enter. (Valid range = 1 to 1.67)" << endl;
        }
        while (difficulty < 1 || difficulty > 1.67);
        
        overallScore /= 3;
        overallScore *= difficulty;
        
        cout << "Diver: " << diverName << ", City: " << diverCity << endl;
        cout << "Overall score: " << setprecision(2) << fixed << overallScore << endl;
        divers++;
        totalScore += overallScore;
        
        cout << "Do you want to process another diver? (Y/N) " << endl;
        cin >> continueProgram;
        cin.ignore();
    }
        
        cout << endl;
        cout << "Event Summary" << endl;
        cout << "Number of divers participating: " << divers << endl;
        cout << "Average score of all divers: " << setprecision(2) << fixed << totalScore / divers << endl;
    
    return 0;
}
