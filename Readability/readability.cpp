#include <iostream>
#include <fstream>
#include <string>
#include "readability.h"

using namespace std;

void file_name(ifstream &input);
void syllable_number(string token, int n, int &syllables);
bool is_vowel(char c);
int flesch_readablity(int sentences, int words, int syllables);
int flesch_kincade(int sentences, int words, int syllables);
int powers_index(int sentences, int words, int syllables);

int main()
{

    ifstream input;
    file_name(input);

    string token;
    int sentences = 0;
    int words = 0;
    int syllables = 0;
    int hundred = 100;
    int sentence_100 = 0;
    int syllable_100 = 0;
    
    while(input >> token) 
    {
        //anything with a letter = word
        if (isalpha(token[0])) 
        {
            words++;
        }
        int n = token.size() - 1;

        //finds end of sentences
        if (ispunct(token[n])) 
        {
            if ( (token[n]) == '.' || (token[n]) == '!' || (token[n]) == '?') 
            {
                sentences++;
            }
            n--;
        }
        syllable_number(token, n, syllables);
        if (words == 100)
        {
            syllable_100 = syllables;
            sentence_100 = sentences;
        } 
    }
    //to not divide by 0
    if (sentences == 0) 
    {
        sentences = 1;
    }
    //to not divide by 0
    if (words == 0) 
    {
        words = 1;
    }

    cout << "Which Readability Formula would you like to use?" << endl;
    cout << "(1) Flesch Reading Index" << endl;
    cout << "(2) Flesch-Kincade Index" << endl;
    cout << "(3) Powers-Sumner-Kearl Index" << endl;
    cout << "Formula choice: ";

    int formula;
    cin >> formula;
    switch (formula)
    {
        case 1:
        cout << "The Flesch Reading Index score of this text is " << flesch_index(sentences, words, syllables) << endl;
        break;

        case 2:
        cout << "The Flesch-Kincaid Index score of this text is " << flesch_kincaid(sentences, words, syllables) << endl;
        break;

        case 3:
        cout << "The Powers-Sumner-Kearl Index score of this text is " << powers_index(sentence_100, 100, syllable_100) << endl;
        break;
    }
    cout << "This text is made of " << sentences << " sentences, " << words << " words and ";
    cout << syllables << " syllables.\n";
    return 0;
}
