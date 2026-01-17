/*
  Victor Li
  Chapter 2: Stock Commission

*/

#include <iostream>

using namespace std;

int main()
{
  double shares = 750, sharePrice = 35.00, commission = 0.02, stockPrice, commissionPrice, totalAmount;

  stockPrice = shares * sharePrice;
  commissionPrice = stockPrice * commission;
  totalAmount = stockPrice + commissionPrice;

  return 0;
}
