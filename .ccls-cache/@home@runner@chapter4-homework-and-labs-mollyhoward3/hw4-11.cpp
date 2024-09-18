// Introductory11.cpp - displays ending balance
// Created/revised by <Molly Howard> on <9/17/2024>

#include <iostream>
using namespace std;

int main() {
  //declare variables
  double startingBalance = 0.0;
  double endingBalance= 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawls = 0.0;

  //enter input items
  cout << "Starting balance: ";
  cin >> startingBalance;
  cout << "Total deposits: ";
  cin >> totalDeposits;
  cout << "Total withdrawls: ";
  cin >> totalWithdrawls;


  //calculate and display ending balance
  endingBalance = startingBalance + totalDeposits - totalWithdrawls;
  cout << "Ending balance: " << endingBalance << endl;
  
  return 0;
} // end of main function