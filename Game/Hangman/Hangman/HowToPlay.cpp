#include <iostream>
using namespace std;
void HowToPlay()
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
        and add body part to the drawing each time the letter chosen is not in the word. It Beggins
        by drawing a head attached to the short vertical line. Add body, legs and arms. If you guess
        wrong more than 6 times you lose and the game is over.
)";
}