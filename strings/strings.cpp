
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include "Header.h"

using namespace std;



int main()
{
    int ch;
    string q15, q15A, q15B, q15C, q15D;
    do
    {
        ch = displayMenu();
        choice1(ch, q15, q15A, q15B, q15C, q15D);

    } while (1 > 0);
}