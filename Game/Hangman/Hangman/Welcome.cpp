#include <iostream>
using namespace std;
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