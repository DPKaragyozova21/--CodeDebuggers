#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Replace.h"
using namespace std;
int GuessTheLetter(const string words[], char blank_for_word[], int& word)
{
    char letter;
    int i = 0;
    int wrong_choice = 0;
    int score = 0, rounded_score = 0;
    const int MAX_GUESS = 26;

    while (i < MAX_GUESS)
    {
        cout << "\n\nEnter a letter to guess: ";
        cin >> letter;

        int search_letter = 0;
        int count_letter = 0;
        bool found_letter = false;
        while (search_letter < words[word].length())
        {
            if (blank_for_word[search_letter] == letter)
            {
                cout << "You already guessed that letter!";
            }
            if (words[word][search_letter] == letter)
            {
                blank_for_word[search_letter] = letter;
                found_letter = true;
            }
            search_letter++;
        }
        i++;

        int j = 0;
        while (j < words[word].length())
        {
            if (blank_for_word[j] != '_')
                count_letter++;
            j++;
        }

        system("cls");

        int k = 0;
        while (k < words[word].length())
        {
            cout << blank_for_word[k] << " ";
            k++;
        }

        if (!found_letter)
        {
            cout << "Wrong Guess";
            wrong_choice++;
        }

        int check = hangmanFigure(wrong_choice, words, word);

        if (count_letter == words[word].length() && check == 0)
        {
            cout << "You guessed the word!";

            if (wrong_choice == 0)
            {
                cout << "\nCONGRATS ON FIRST TRY!!";
            }

            break;
        }
        else if (check == -1)
        {
            if (rounded_score < 0)
                break;
        }
    }
    return 0;
}