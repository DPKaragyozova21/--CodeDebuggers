#include <iostream>
#include <string>
#include <fstream>
#include "ReadAndGenerate.h"
using namespace std;
void Read(ifstream &file, string words[], const int MaxLines=2999)
{
	int i = 0;
	while (i < MaxLines && getline(file, words[i]))
	{
		i++;
	}
}
int Generate(const string words[], char BlankForLetter[], const int MaxLines = 2999)
{
	int random_word = rand() % 15;
	for (int blanks = 0; blanks < words[random_word].length(); blanks++)
	{
		BlankForLetter[blanks] == '_';
		cout << BlankForLetter[blanks] << " ";
	}
	return random_word;
}
