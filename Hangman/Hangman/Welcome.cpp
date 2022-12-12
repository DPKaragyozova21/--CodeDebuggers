#include <iostream>
#include "Welcome.h"
using namespace std;
void WelcomeToHangman(int option)
{
	int option;
	cout << "\t\t\t Welcome to Hangman";
	cout << "\t\t\t 1) Start Game";
	cout << "\t\t\t 2) Go to Presentation";
	cout << "\t\t\t 3) Go to Documentation";
	cout << "\t\t Good Luck and have fun";
}
//Stages of the gallow
void gallow0()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   \n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow1()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow2()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t   |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow3()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t  /|\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow4()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t  /|\\\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow5()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t  /|\\\n";
	cout << "\t | \t   |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow6()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t  /|\\\n";
	cout << "\t | \t   |\n";
	cout << "\t | \t  / \n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}
void gallow7()
{
	cout << "\t ___________ \n";
	cout << "\t | \t   | \n";
	cout << "\t | \t   O\n";
	cout << "\t | \t  /|\\\n";
	cout << "\t | \t   |\n";
	cout << "\t | \t  / \\\n";
	cout << "\t |\n";
	cout << "\t |\n";
	cout << "\t _______ ";
}