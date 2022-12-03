#include <iostream>
#include <fstream> // for files
#include <string> // for strings
#include "Welcome.h"
using namespace std;
int main()
{
	WelcomeToHangman;
	const int MaxSize = 100; // Max letters in a word
	string word[MaxSize];
	unsigned seed = time(0);
	srand(seed);
	ifstream file;
	file.open("words.txt");
	if (!file) // If file doesn't open
	{
		cout << "Game Crashed! (Can't open the word list)";
	}
	else
	{
		int word, attempt = 0;
		char blanks[MaxSize], option;
		string words[MaxSize];
	}
}