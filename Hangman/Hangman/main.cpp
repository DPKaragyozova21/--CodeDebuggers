#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "Welcome.h"
#include "HowToPlay.h"
#include "Figure.h"
using namespace std;

void WelcomeToHangman();
void Read(const int, ifstream&, string[]);
int Generate(const string[], char[], const int);
int hangmanFigure(int&);
int GuessTheLetter(const string[], char[], int&);

int main()
{
    const int MaxLines = 100;
    const int MaxSize = 100;

    string words[MaxSize];

    unsigned seed = time(0);
    srand(seed);

    WelcomeToHangman();

    int option;
    cin >> option;
    if (option == 1)
    {
        system("cls");
        ifstream file;
        file.open("words.txt");

        if (!file) //input validation
        {
            cout << "Error! Couldn't open the word list! Game Crashed!!\n";
        }
        else
        {
            int word, game_score;
            int attempt = 0;
            char blank[MaxSize];
            int score_list[MaxLines];
            string words_list[MaxLines];
            char option;

            Read(MaxLines, file, words);

            do
            {
                word = Generate(words, blank, MaxLines);
                game_score = GuessTheLetter(words, blank, word);

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
    if (option == 2)
    {
        HowToPlay();
    }
    string Documentation = "start https://codingburgas-my.sharepoint.com/:w:/g/personal/bkkyovtorov21_codingburgas_bg/ETuNwrwQV19OppTPU1aLQ40BX_-EH7mvGuLsx4JqxA9LlQ?e=y1kHl3";
    string Presentation = "start https://codingburgas-my.sharepoint.com/:p:/g/personal/bkkyovtorov21_codingburgas_bg/EbpgvY3OoLdJpT8mxQnwKtUBdSHDxAXCyGK6IWeCrDlyXw?e=KOW2b6";
    if (option == 3)
    {
        system("cls");
        system(Presentation.c_str());
    }
    else if (option == 4)
    {
        system("cls");
        system(Documentation.c_str());
    }
}
int hangmanFigure(int& wrong_choices);
int Generate(const string words[], char blank[], const int MaxLines);
void Read(const int MaxLines, ifstream& inputFile, string words[]);
int GuessTheLetter(const string words[], char blank[], int& word);
