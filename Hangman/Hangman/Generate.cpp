#include <iostream>
using namespace std;
int Generate(const string words[], char blank[], const int MaxLines)
{
    int random_word = rand() % 12;
    for (int blanks = 0; blanks < words[random_word].length(); blanks++)
    {
        blank[blanks] = '_';
        cout << blank[blanks] << " ";
    }
    return random_word;
}