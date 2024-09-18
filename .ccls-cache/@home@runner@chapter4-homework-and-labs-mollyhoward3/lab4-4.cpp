//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Molly Howard> on <9/17/2024>
#include <iostream>
using namespace std;
int main()
{
  //declare and name constants + variables
  const double PI = 3.14;
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;

  //enter input items
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;
  
  //calculate and display the volume
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
  
  return 0;
} 
//end of main fuction