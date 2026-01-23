/*
  Victor Li
  Chapter 2: Total Purchase
  This program calculates and outputs the subtotal, sales tax, and total purchase amount of five items
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double itemOne = 15.95, itemTwo = 24.95, itemThree = 6.95, itemFour = 12.95, itemFive = 3.95, salesTax = 0.07, taxAmount, totalAmount, subTotal;

// This adds up all five items and calculates the sales tax before adding it to the subtotal to get the total amount
  subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
  taxAmount = subTotal * salesTax;
  totalAmount = subTotal + taxAmount;

  cout << "The price of item 1 is: $" << itemOne << endl;
  cout << "The price of item 2 is: $" << itemTwo << endl;
  cout << "The price of item 3 is: $" << itemThree << endl;
  cout << "The price of item 4 is: $" << itemFour << endl;
  cout << "The price of item 5 is: $" << itemFive << endl;
  cout << "------------------------------\n";

  cout << "The subtotal of the sale before tax is: $" << subTotal << endl;
  cout << "The sales tax is: $" << fixed << setprecision(2) << taxAmount << endl;
  cout << "The total is: $" << fixed << setprecision(2) << totalAmount << endl;
  
  return 0;
}
