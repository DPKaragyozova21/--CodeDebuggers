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
	string words[MaxSize];
	unsigned seed = time(0);
	srand(seed);
	ifstream file;
	file.open("words.txt");
	if (file) // If file doesn't open correctly
	{
		cout << "Game Crashed! (Can't open the word list)";
	}
	else
	{
		int word, attempt = 0;
		char blanks[MaxSize], option;
		string words[MaxSize];
		Read(file, words, MaxLines);
		do
		{
			cout << "Do you want to play?";
			cin >> option;
			word = Generate(words, blanks, MaxLines);
			system("cls");
			words[attempt] = words[word];
			attempt++;
		} while (option == 'y' || option == 'Y');
		file.close();
	}
	return 0;
}