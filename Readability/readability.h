#ifndef _readability_h_
#define _readability_h_

#include <iostream>
#include <fstream>
#include <string>

inline void file_name(std::ifstream &input) 
{
    std::string filename;
    while (true) 
    {  
        std::cout << "Please enter a file name: " << std::endl;
        getline(std::cin, filename);
        input.open(filename);
        if (input.is_open()) 
        {
            break;
        }
        std::cerr << "Unable to Process File." << std::endl;
    }
}

inline bool is_vowel(char c) 
{
    switch (c) 
    {
        case 'a': case 'A': 
        case 'e': case 'E': 
        case 'i': case 'I': 
        case 'o': case 'O': 
        case 'u': case 'U': 
        case 'y': case 'Y':
    return true;
        default:
    return false;
    }
}

inline void syllable_number(std::string token, int n, int & syllables) 
{
    bool vowel_before = false;
    bool no_syllables = true;
  
    for (int i = 0; i <= n; i++) 
    {
        if (is_vowel(token[i])) 
        {
            if (!vowel_before) 
            {
                if (!((i == n) && (token[i] == 'e'))) 
                {
	                syllables++;
	                vowel_before = true;
	                no_syllables = false;
	            }
            }
        } 
        else 
        {
            vowel_before = false;
        }
    }
    if (no_syllables)
    {
        syllables++;
    }
}

inline int flesch_index (int sentences, int words, int syllables)
{
    //constants
    double a = 206.835;
    double b = 84.6;
    double c = 1.015;
    double index = (a -  (b * (syllables / words)) - (c * (words / sentences)));
    return index;
}

inline int flesch_kincaid (int sentences, int words, int syllables)
{
    //constants
    double a = 0.39;
    double b = 11.8;
    double c = 10.59;
    double index = ((a * (words / sentences)) + (b * (syllables / words)) - c);
    return index;
}

inline int powers_index (int sentence_100, int words, int syllable_100)
{
    double a = 0.0778;
    double b = 0.0455;
    double c = 2.7971;
    //words substituted to 100 for powers index
    double index = ((a * (100 / sentence_100)) + (b * (syllable_100)) - c);
    return index;
}
#endif
