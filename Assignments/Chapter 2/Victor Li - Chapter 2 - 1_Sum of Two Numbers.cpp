/*
  Victor Li
  Chapter 2: Sum of Two Numbers
  This program stores 50 and 100 as integer variables and outputs the sum 
*/

#include <iostream>

using namespace std;

int main()
{
  int numberOne = 50, numberTwo = 100, sum;

// This adds 50 and 100 together to get the sum
  sum = numberOne + numberTwo;
  
  cout << "The total value of " << numberOne << " and " << numberTwo << " is " << sum << ".\n";

  return 0;
}
