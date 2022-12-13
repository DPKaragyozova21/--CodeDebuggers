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

        if (count_letter == words[word].length())
        {
            cout << "Good job! You guessed the word. \n";

            if (wrong_choices == 0)
            {
                cout << "YOU DID IT ON THE FIRST TRY!?!";
            }
            break;
        }
        if (wrong_choices > 6)
        {
            cout << endl << endl;
            cout << "GAME OVER! YOU LOSE" << endl;
            cout << "Your word was " << words[word];
            return 0;
        }
    }
    return 0;
}