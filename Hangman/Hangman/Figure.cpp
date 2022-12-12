#include <iostream>
#include "Figure.h"
#include "Welcome.h"
using namespace std;
int hangmanFigure(int &wrong_choice)
{
	switch (wrong_choice)
	{
	case 0:
		gallow0();
		break;
	case 1:
		gallow1();
		break;
	case 2:
		gallow2();
		break;
	case 3:
		gallow3();
		break;
	case 4:
		gallow4();
		break;
	case 5:
		gallow5();
	case 6:
		gallow6();
		break;
	default:
		gallow0();
	}
    return 0;
}