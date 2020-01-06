/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/30/2019
 * *Description: This program uses a void function named smallSort that
 * takes three int parameters and sorts their values in ascending order.
 * **********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Prototype function
void smallSort(int &first, int &second, int &third);

//Use the smallSort function to determine the ascending 
//order of the inputted numbers.
void smallSort(int &first, int &second, int &third)
{

int number = 0;

	//Determine the order for the integers in 
	//ascending order
	if (first > second)
	{
		number = first;
		first = second;		//if the first is greater	
		second = number;
	}
	if (first > third)
	{
		number = first;
		first = third;		//if the second is greater
		third = number;
	}
	if (second > third)
	{
		number = second;
		second = third;		//if the third is greater
		third = number;
	}
}
/*
//Call the function to the main function
int main()
{

	//Have three random numbers to display in proper order
	//Call the function smallSort
	int first = 27;
	int second = -1;
	int third = 14;
	smallSort(first, second, third);
	cout << first << ", " << second << ", " << third << endl;

	return 0;
}
*/
