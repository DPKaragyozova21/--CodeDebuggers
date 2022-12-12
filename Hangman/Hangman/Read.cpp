#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Read(const int MaxLines, ifstream& inputFile, string words[])
{
    int i = 0;

    while (i < MaxLines && getline(inputFile, words[i]))
    {
        i++;
    }
}