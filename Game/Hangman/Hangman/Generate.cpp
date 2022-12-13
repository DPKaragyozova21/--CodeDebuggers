#include <iostream>
using namespace std;
int GenerateBlanks(const string words[], char blank[], const int MaxLines)
{
    int random_word = rand() % 12;
    int blanks = 0;
    do
    {
        blank[blanks] = '_';
        cout << blank[blanks] << " ";
        blanks++;
    } 
    while (blanks < words[random_word].length());
    return random_word;
}