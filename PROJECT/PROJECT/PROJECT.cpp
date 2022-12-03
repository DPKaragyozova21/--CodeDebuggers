#include <iostream>
#include <fstream> // for files
#include <string> // for strings
#include "Welcome.h"
#include "ReadAndGenerate.h"
using namespace std;
int main()
{
	WelcomeToHangman;
	const int MaxSize = 15; // Max letters in a word
	const int MaxLines = 2999; // The number of the words in words.txt
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
		char blanks[MaxSize];
		string words[MaxSize];
		ReadFile(file, words);
	}
}