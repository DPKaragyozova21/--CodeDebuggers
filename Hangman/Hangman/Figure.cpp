#include <iostream>
using namespace std;
//Stages of the gallow
void gallow0()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   \n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
void gallow1()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
void gallow2()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t | \t   |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
void gallow3()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t | \t  /|\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
void gallow4()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t | \t  /|\\\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
void gallow5()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t | \t  /|\\\n";
    cout << "\t | \t   |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
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
    cout << "\t _______\n";
}
void gallow7()
{
    cout << endl;
    cout << "\t ___________ \n";
    cout << "\t | \t   | \n";
    cout << "\t | \t   O\n";
    cout << "\t | \t  /|\\\n";
    cout << "\t | \t   |\n";
    cout << "\t | \t  / \\\n";
    cout << "\t |\n";
    cout << "\t |\n";
    cout << "\t _______\n";
}
int hangmanFigure(int& wrong_choices)
{
    if (wrong_choices == 0)
    {
        gallow0();
    }
    else if (wrong_choices == 1)
    {
        gallow1();
    }
    else if (wrong_choices == 2)
    {
        gallow2();
    }
    else if (wrong_choices == 3)
    {
        gallow3();
    }
    else if (wrong_choices == 4)
    {
        gallow4();
    }
    else if (wrong_choices == 5)
    {
        gallow5();
    }
    else if (wrong_choices == 6)
    {
        gallow6();
    }
    else if (wrong_choices == 7)
    {
        gallow7();
    }
    if (wrong_choices > 7)
    {
        cout << "Game Over";
        return 0;
    }
    return 0;
}