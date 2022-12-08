#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Figure.h"
using namespace std;
int hangmanFigure(int wrong_choice, const string words[], int word)
{
    char head = 'O', left_body = '/', right_body = '\\', body = '|';

    if (wrong_choice > 0)
        cout << "\t\t " << head << endl;
    if (wrong_choice == 2)
        cout << "\t\t " << body;
    else if (wrong_choice > 2)
        cout << "\t\t" << left_body << body;
    if (wrong_choice > 3)
        cout << right_body << endl;
    if (wrong_choice > 4)
        cout << "\t\t" << left_body;
    if (wrong_choice > 5)
        cout << " " << right_body;
    if (wrong_choice > 6)
    {
        cout << "\n\nGAME OVER!!";
        cout << "\nYour word was " << words[word];

        return -1;
    }
    return 0;
}