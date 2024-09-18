// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Molly Howard> on <9/17/2024>

#include <iostream>
using namespace std;

int main() {
  //declare variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int totalPizzas = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  //enter input items
  cout << "Small pizzas sold: ";
  cin >> small;
  cout << "Medium pizzas sold: ";
  cin >> medium;
  cout << "Large pizzas sold: ";
  cin >> large;
  cout << "Family pizzas sold: ";
  cin >> family;

  //calculate percetages
  totalPizzas = small + medium + large + family;
  smallPercent = static_cast<double>(small) / totalPizzas * 100;
  mediumPercent = static_cast<double>(medium) / totalPizzas * 100;
  largePercent = static_cast<double>(large) / totalPizzas * 100;
  familyPercent = static_cast<double>(family) / totalPizzas * 100;
  

  //display output
  cout << "Total pizzas sold: " << totalPizzas << "Percent of small pizzas sold: " << smallPercent << "%:" << "Percent of medium pizzas sold: " << mediumPercent << "%" << "Percent of large pizzas sold: " << largePercent << "%" << "Percent of family pizzas sold: " << familyPercent << "%" << endl;

  
  

  return 0;
} // end of main function