// class activity 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program to roll a dice

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    cout << "Roll the dice to get a number" << endl;
    int x = (rand() % 6) + 1;
    int y = (rand() % 6) + 1;
    cout << "The numbers you got are: " << x << " and " << y << endl;
    cout << "Click again to get new numbers." << endl;
    return 0;
}
