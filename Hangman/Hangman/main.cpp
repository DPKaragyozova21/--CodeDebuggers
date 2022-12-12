#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "Welcome.h"
#include "ReadAndGenerate.h"
#include "Replace.h"
#include "Figure.h"
using namespace std;

void WelcomeToHangman(int);
void Read(const int, ifstream&, string[]);
int Generate(const string[], char[], const int);
int hangmanFigure(int&);
int GuessTheLetter(const string[], char[], int&);

int main()
{
    const int MaxLines = 2999;
    const int MaxSize = 15;

    string words[MaxSize];

    unsigned seed = time(0);
    srand(seed);
    int option;
    cin >> option;
    WelcomeToHangman(option);
    if (option == 1)
    {
        ifstream file;
        file.open("words.txt");

        if (!file) //input validation
            cout << "Error! Couldn't open the word list! Game Crashed!!\n";
        else
        {
            int word, game_score;
            int attempt = 0;
            char blank_for_word[MaxSize];
            int score_list[MaxLines];
            string words_list[MaxLines];
            char option;

            Read(MaxLines, file, words);

            do
            {
                word = Generate(words, blank_for_word, MaxLines);
                game_score = GuessTheLetter(words, blank_for_word, word);

                cout << "\nDo you want to play again(press y or Y)?";
                cin >> option;

                system("cls");

                words_list[attempt] = words[word];
                score_list[attempt] = game_score;

                attempt++;

            } while (option == 'y' || option == 'Y');

            file.close();
        }

        return 0;
    }
}