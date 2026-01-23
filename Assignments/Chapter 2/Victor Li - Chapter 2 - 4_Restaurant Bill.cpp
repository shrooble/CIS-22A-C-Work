/*
  Victor Li
  Chapter 2: Restaurant Bill
  This program calculates the total bill of a meal after calculating the tax and tip
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double subTotal = 88.67, taxPercent = 0.0675, tipPercent = 0.20, taxAmount, afterTax, tipAmount, totalBill;

// This calculates the cost of the meal after tax (before tip) by calculating the tax amount first before adding it to the subtotal
  taxAmount = subTotal * taxPercent;
  afterTax = subTotal + taxAmount;
  
// This calculates the tip of the meal and adds it to the total after tax to get the total bill of the meal
  tipAmount = afterTax * tipPercent;
  totalBill = tipAmount + afterTax;

  cout << "The subtotal before tax and tip is: $" << subTotal << endl;
  cout << "The amount of tax is: $" << fixed << setprecision(2) << taxAmount << endl;
  cout << "The amount of tip is: $" << fixed << setprecision(2) << tipAmount << endl;
  cout << "The total bill is: $" << fixed << setprecision(2) << totalBill << endl;

  return 0;
}
