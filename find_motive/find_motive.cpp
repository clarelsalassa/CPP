#include <iostream>
#include <fstream>


#include "find_motive.h"



int max(int a, int b)
{
    return (a > b) ? a : b;
}

void badHeuristic(std::string str, int size, int badchar[NO_OF_CHARS])
{
    int i;

    for ( i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;

    for ( i = 0; i < size; i++)
        badchar[(int) str[i]] = i; 
}



int find_motive(std::string txt, std::string motive)
{
    int count = 0;
   
    int m = motive.size();
    int n = txt.size();

    int badchar[NO_OF_CHARS];
    badHeuristic(motive.data(), m, badchar);

    int s = 0;
    while (s <= (n - m))
    {
        
        int j = m - 1;
        while (j >= 0 && motive[j] == txt[s + j])
        {
            j--;
        }

        if (j < 0)
        {
            count++;
            while (txt[s] != ' ' && s < n)
            {
                s++;
            }
            
            // s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
        }
        else
            s += max(1, j - badchar[txt[s + j]]);
    }
    return count;
    
}

// void printOccurrences(std::string txt, std::string pat)
// {
//     int found = txt.find(pat);
//     while (found != std::string::npos) {
//         std::cout << "Pattern found at index " << found << std::endl;
//         found = txt.find(pat, found + 1);
//     }
// }


