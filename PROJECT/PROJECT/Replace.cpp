#include <iostream>
#include "Replace.h"
using namespace std;
int GuessTheLetter(string words[], char blanks[], int &word)
{
	char letter;
	int i = 0;
	const int MaxGuesses = 15;
	while (i < MaxGuesses)
	{
		cout << "Enter a letter";
		cin >> letter;
		int search = 0, counter = 0;
		bool found = false;
		while (search < words[word].length())
		{
			if (blanks[search] == letter)
			{
				cout << "Already guessed that word. Try again";
			}
			if (words[word][search] == letter)
			{
				blanks[search] = letter;
				found = true;
			}
			search++;
		}
		i++;

		int j = 0;
		while (j < words[word].length())
		{
			if (blanks[j] != '_')
			{
				counter++;
				j++;
			}
		}
		system("cls");
		int k = 0;
		while (k < words[word].length())
		{
			cout << blanks[k] << " ";
			k++;
		}
		if (found == 1)
		{
			cout << "Wrong guess";
		}
	}
}