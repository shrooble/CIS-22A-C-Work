/*
  Victor Li
  Chapter 2: Total Purchase

*/

#include <iostream>

using namespace std;

int main()
{
  double itemOne = 15.95, itemTwo = 24.95, itemThree = 6.95, itemFour = 12.95, itemFive = 3.95, salesTax = 7, taxAmount, totalTax, subTotal;

  subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
  taxAmount = subTotal * salesTax;
  totalTax = subTotal + taxAmount;

  cout << 

  return 0;
}
