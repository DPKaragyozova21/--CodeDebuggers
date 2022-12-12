#include <iostream>
#include <string>
#include <fstream>
#include "ReadAndGenerate.h"
using namespace std;
void Read(const int MaxLines, ifstream& file, string words[])
{
	int i = 0;
	file.open("words.txt");
	while (i < MaxLines && getline(file, words[i]))
	{
		i++;
	}
}
int Generate(const string words[], char BlankForLetter[], const int MaxLines)
{
	int random_word = rand() % 15;
	for (int blanks = 0; blanks < words[random_word].length(); blanks++)
	{
		BlankForLetter[blanks] = '_';
		cout << BlankForLetter[blanks] << " ";
	}
	return random_word;
}
