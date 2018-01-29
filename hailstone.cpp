/************************************************************************************************************
*** Author: Stephanie Ayala
*** Date: 01-14-2018
*** Description: This program creates a function that uses a given integer as a parameter and runs it through a loop until the integer reaches one, then returns the number of steps it took.
*************************************************************************************************************/

#include <iostream>
using namespace std;

int hailstone (int number);
/*
int main()
{
    int num, steps;

    cout << "What is the begining number?" << endl;
    cin >> num;

    steps = hailstone(num);

    cout << steps << endl;

    return 0;
}
*/
/*****************************************************************************************************                         hailstone
* This function takes an integer as a parameter- if the number is even then it is multiplied by two and if the number is odd it is divided by three and one is added to get the next number in the loop until the number gets to one. If the number is initially one, then 0 is returned. 
* *************************************************************************************************************/ 

int hailstone(int number)
{
    int count;

    // Set the count to 0
    count = 0;

    // If the inital number is 1, return 0 to the main function
    if (number == 1 && count == 0)
    	return false;

    // Loop the values until the number 1 is reached
    while (number !=1)
    {
    	// If the number is even divide it by 2 to make the next number
    	if (number % 2 == 0)
    	{	number /= 2;
    	}
    	else
    	{	number = number * 3 + 1;
    	}
    	count++;
    }
    return count;
}
