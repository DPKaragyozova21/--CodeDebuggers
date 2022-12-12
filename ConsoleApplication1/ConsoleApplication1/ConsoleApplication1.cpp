//Hangman game by Ankit Goel

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

void WelcomeToHangman();
void Read(const int, ifstream&, string[]);
int Generate(const string[], char[], const int);
int hangmanFigure(int, const string[], int);
int GuessTheLetter(const string[], char[], int&);

int main()
{
    const int MaxLines = 100; // You can not have a list of more than 100 words
    const int MaxSize = 100; // You can not generate more than 100 blanks

    string words[MaxSize]; // A word cannot have more than 100 letters

    unsigned seed = time(0); //To generate words randomly
    srand(seed);

    WelcomeToHangman();

    ifstream inputFile;
    inputFile.open("words.txt");

    if (!inputFile) //input validation
        cout << "Error! Couldn't open the word list! Game Crashed!!\n";
    else
    {
        int word, game_score;
        int attempt = 0;
        char blank[MaxSize];
        int score_list[MaxLines];
        string words_list[MaxLines];
        char option;

        Read(MaxLines, inputFile, words);

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

        inputFile.close();
    }

    return 0;
}

/**This function is to print a welcome
   message about the program**/
void WelcomeToHangman()
{
    char ch;
    cout << "\t\t\t~~~~~~WELCOME TO HANGMAN!!!~~~~~~\n\n\n";
    cout << "\t\tRules of the game:-\n";
    cout << "\t1. There were will be number of blanks generated depending on the word.\n";
    cout << "\t2. Try to guess each letter of the word.\n";
    cout << "\t3. Each wrong guess displays the parts of the hangman.\n";
    cout << "\t4. When the hangman is fully drawn, YOUR OUT!!.\n\n";
    cout << "\t\tScoring system:-\n";
    cout << "\t5. Correct guess: +1 point         Wrong guess: -1 point\n";
    cout << "\t6. Guessing full word: +2 points (AND) without errors: +3 points\n";
    cout << "\t\t. Good Luck!!\n\n";

    cout << "\tPress Y to continue to game: ";
    cin >> ch;

    if (ch == 'Y')
        system("cls");
}

/**This function is to take the word from the user
   and then generate the blanks**/
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

/**This function is to read each word from
   the input file**/
void Read(const int MaxLines, ifstream& inputFile, string words[])
{
    int i = 0;

    while (i < MaxLines && getline(inputFile, words[i]))
    {
        i++;
    }
}

/**This function is to guess each letter and replace the blank
   with the corresponding letter and keep track of score**/
int GuessTheLetter(const string words[], char blank[], int& word)
{
    char letter;
    int i = 0;
    int wrong_choice = 0;
    int score = 0, rounded_score = 0;
    const int MAX_GUESS = 26;

    while (i < MAX_GUESS)
    {
        cout << "\n\nEnter a letter to guess: ";
        cin >> letter;

        int search_letter = 0;
        int count_letter = 0;
        bool found_letter = false;

        //loop to search if the letter matches the word
        while (search_letter < words[word].length())
        {
            if (blank[search_letter] == letter)
            {
                cout << "You already guessed that letter!";
                score--;
            }
            if (words[word][search_letter] == letter)
            {
                blank[search_letter] = letter;
                found_letter = true;
                score++;
            }
            search_letter++;
        }
        i++;

        int j = 0;
        //loop to check if all the blanks are filled and count the letters found
        while (j < words[word].length())
        {
            if (blank[j] != '_')
                count_letter++;
            j++;
        }

        system("cls");

        int k = 0;
        //loop to generate the no.of blanks according to the length of the word
        while (k < words[word].length())
        {
            cout << blank[k] << " ";
            k++;
        }

        if (!found_letter)
        {
            cout << "\n\nWrong letter!\n";
            wrong_choice++;
            score--;
        }

        cout << "\n\n\n\n\nHANGMAN FIGURE DISPLAY\n\n\n\n";
        int check = hangmanFigure(wrong_choice, words, word);

        rounded_score = static_cast<double>(score) / words[word].length() * 10;

        if (count_letter == words[word].length() && check == 0)
        {
            cout << "\nYou guessed the word!";
            rounded_score += 2;

            if (wrong_choice == 0)
            {
                cout << "\nCONGRATS ON FIRST TRY!!";
                rounded_score++;
            }

            break;
        }
        else if (check == -1)
        {
            if (rounded_score < 0)
                rounded_score = 0;
            break;
        }
    }

    cout << "\nYour score is: " << rounded_score << "/10";

    return rounded_score;
}

/**This function is to display the hangman figure each time
   an answer is wrong**/
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