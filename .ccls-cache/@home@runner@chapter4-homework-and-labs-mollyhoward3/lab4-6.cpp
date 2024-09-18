//Lab4-6.cpp - displays the area of a triangle
//Created/revised by <Molly Howard> on <9/17/2024>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	const double base = 11;
	const double height = 13;
	double area = 0.0;

	//calculate and display area
	area = base * height / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function