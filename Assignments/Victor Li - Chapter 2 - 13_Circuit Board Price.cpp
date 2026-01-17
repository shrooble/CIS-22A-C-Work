/*
  Victor Li
  Chapter 2: Circuit Board Price
  This program calculates the selling price of a circuit board based on the percent profit
*/

#include <iostream>

using namespace std;

int main()
{
  double percentProfit = 0.35, sellingCost = 14.95, sellingPrice;

  sellingPrice = sellingCost * percentProfit;

  cout << "The selling price of the circuit board is $" << sellingPrice << "." << endl;

  return 0;
}
