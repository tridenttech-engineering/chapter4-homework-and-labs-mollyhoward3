//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <Molly Howard> on <9/16/2024>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double commissionRate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Commission rate as decimal amount: ";
  cin >> commissionRate;
  cout << "Sales amount: ";
  cin >> sales;

  //calculate and display the commision
  commission = sales * commissionRate;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
