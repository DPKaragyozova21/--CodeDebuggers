#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
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
        system("cls");
        cout << endl << endl;
        cout << "\t HANG-MAN \n";
        cout << "\t Number of Players: 2 (You and the program)\n";
        cout << "\t Object: : The program thinks of a word and\n";
        cout << "\t you try to guess it by guessing letters.\n";
        cout << "\t Each incorrect guess brings you closer\n";
        cout << "\t to being hanged. This game\n";
        cout << "\t helps to sharpen children’s spelling and \n";
        cout << "\t word-decoding skills.\n \n";
        cout << R"(      
                                                               a  b  c  d  c  d  e  f  g  h  i  j  k  l

                                                               n  o  p  q  r  s  t  u  v  w  x  y  z
                                                                         ___________
                                                                         |         |
                                                                         |         O
                                                                         |        /|\
                                                                         |         |
                                                                         |        /
                                                                         |

)" << endl;
        cout << R"(
        The program will fill in the letter everywhere it appears on the appropriate dash (or dashes)
        each time you guess correctly. It will circle the letter on the alphabet if is guessed correctly
        and add body part to the drawing each time the letter chosen is not in the word. The Beggining is
        by drawing a head attached to the short vertical line (the "noose"). Add eyes, ears, nose, hair,
        body, legs and arms. Put an X through the letter that was guessed and not correct.
)";
    }
    string Documentation = "start https://codingburgas-my.sharepoint.com/:w:/g/personal/bkkyovtorov21_codingburgas_bg/ETuNwrwQV19OppTPU1aLQ40BX_-EH7mvGuLsx4JqxA9LlQ?e=y1kHl3";
    string Presentation = "start https://codingburgas-my.sharepoint.com/:p:/g/personal/bkkyovtorov21_codingburgas_bg/EedHIjBV7rZJuxm-vqmSyRwB8tHOrtGTyZPJNmMUQwCMcA?e=6SgsCH";
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
void WelcomeToHangman()
{
    cout << R"(
                                __      __       .__                                ___________        ___ ___                                              
                               /  \    /  \ ____ |  |   ____  ____   _____   ____   \__    ___/___    /   |   \_____    ____    ____   _____ _____    ____  
                               \   \/\/   // __ \|  | _/ ___\/  _ \ /     \_/ __ \    |    | /  _ \  /    ~    \__  \  /    \  / ___\ /     \\__  \  /    \ 
                                \        /\  ___/|  |_\  \__(  <_> )  Y Y  \  ___/    |    |(  <_> ) \    Y    // __ \|   |  \/ /_/  >  Y Y  \/ __ \|   |  \
                                 \__/\  /  \___  >____/\___  >____/|__|_|  /\___  >   |____| \____/   \___|_  /(____  /___|  /\___  /|__|_|  (____  /___|  /
                                      \/       \/          \/            \/     \/                          \/      \/     \//_____/       \/     \/     \/      
)" << '\n';
    cout << "\t\t\t 1) Start Game \n";
    cout << "\t\t\t 2) How to play \n";
    cout << "\t\t\t 3) Go to Presentation \n";
    cout << "\t\t\t 4) Go to Documentation \n";
    cout << "\t\t\t Good Luck and have fun \n";
}
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
int Generate(const string words[], char blank[], const int MaxLines)
{
    int random_word = rand() % 12;
    for (int blanks = 0; blanks < words[random_word].length(); blanks++)
    {
        blank[blanks] = '_';
        cout << blank[blanks] << " ";
    }
    return random_word;
}
void Read(const int MaxLines, ifstream& inputFile, string words[])
{
    int i = 0;

    while (i < MaxLines && getline(inputFile, words[i]))
    {
        i++;
    }
}
int GuessTheLetter(const string words[], char blank[], int& word)
{
    cout << endl;
    cout << endl;
    gallow0();
    char letter;
    int i = 0;
    int wrong_choices = 0;
    int score = 0, rounded_score = 0;
    const int MAX_GUESS = 26;

    while (i < MAX_GUESS)
    {
        cout << "Enter a letter to guess: ";
        cin >> letter;

        int search_letter = 0;
        int count_letter = 0;
        bool found_letter = false;
        while (search_letter < words[word].length())
        {
            if (blank[search_letter] == letter)
            {
                cout << "You already guessed that letter!";
            }
            if (words[word][search_letter] == letter)
            {
                blank[search_letter] = letter;
                found_letter = true;
            }
            search_letter++;
        }
        i++;

        int j = 0;
        while (j < words[word].length())
        {
            if (blank[j] != '_')
                count_letter++;
            j++;
        }

        system("cls");
        int k = 0;
        while (k < words[word].length())
        {
            cout << blank[k] << " ";
            k++;
        }

        if (!found_letter)
        {
            cout << "Wrong Guess \n";
            wrong_choices++;
        }

        int check = hangmanFigure(wrong_choices);

        if (count_letter == words[word].length() && check == 0)
        {
            cout << "You guessed the word!";

            if (wrong_choices == 0)
            {
                cout << "YOU DID IT ON THE FIRST TIME!?!";
            }
            break;
        }
        if (wrong_choices == 7)
        {
            return 0;
        }
    }
    return 0;
}
