#include <iostream>
#include <stdlib.h>
#include <cmath>
#include "Header.h"


using namespace std;



int main()
{
    //variables
    int ch;
    string q15, q15A, q15B, q15C, q15D;
    //this do-while loop is for execution of the program
    do
    {
        ch = displayMenu();
        choice1(ch, q15, q15A, q15B, q15C, q15D);

    } while (1 > 0);
}
