#include <iostream>
#include <string>
#include "Figure.h"
using namespace std;
int GuessTheLetter(const string words[], char blank[], int& word)
{
    cout << endl;
    cout << endl;
    gallow0();
    char letter;
    int i = 0;
    int wrong_choices = 0;
    int score = 0, rounded_score = 0;
    const int MAX_GUESS = 26;

    while (i < MAX_GUESS)
    {
        cout << "Enter a letter to guess: ";
        cin >> letter;

        int search_letter = 0;
        int count_letter = 0;
        bool found_letter = false;
        while (search_letter < words[word].length())
        {
            if (words[word][search_letter] == letter)
            {
                blank[search_letter] = letter;
                found_letter = true;
            }
            search_letter++;
        }
        i++;

        int j = 0;
        while (j < words[word].length())
        {
            if (blank[j] != '_')
                count_letter++;
            j++;
        }

        system("cls");
        int k = 0;
        while (k < words[word].length())
        {
            cout << blank[k] << " ";
            k++;
        }

        if (!found_letter)
        {
            cout << "Wrong Guess \n";
            wrong_choices++;
        }

        int check = hangmanFigure(wrong_choices);

        if (count_letter == words[word].length() && check == 0)
        {
            cout << "You guessed the word!";

            if (wrong_choices == 0)
            {
                cout << "YOU DID IT ON THE FIRST TIME!?!";
            }
            break;
        }
        if (wrong_choices == 7)
        {
            return 0;
        }
    }
    return 0;
}