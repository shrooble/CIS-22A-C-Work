/*
  Victor Li
  Chapter 2: Average of Values
  This program calculates and outputs the sum and average of five numbers
*/

#include <iostream>

using namespace std;

int main()
{
  double numOne = 28.0, numTwo = 32.0, numThree = 37.0, numFour = 24.0, numFive = 33.0, sum, average;

// This adds each number to get the sum before dividing the sum by 5 to get the average
  sum = numOne + numTwo + numThree + numFour + numFive;
  average = sum / 5;

  cout << "The sum of the five numbers are: " << sum << endl;
  cout << "The average of the five numbers are: " << average << endl;

  return 0;
}
