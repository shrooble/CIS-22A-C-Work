/*
  Victor Li
  Chapter 3: 1 - Miles Per Gallon
  This program calculates the miles per gallon of a car based on the car's maximum miles and gallons 
*/

#include <iostream>

using namespace std;

int main()
{
  double gallons, milesPerTank, milesPerGallon;

  cout << "Enter the number of gallons the car can hold.\n";
  cin >> gallons;
  cout << "Enter the number of miles the car can drive on a full tank.\n";
  cin >> milesPerTank;

// This calculates the miles the car can go on a single gallon by dividing the miles the car can drive on a full tank, by the gallons of gas the car can hold
  milesPerGallon = milesPerTank / gallons;

  cout << "The car can drive: " << milesPerGallon << " Miles Per Gallon\n";

  return 0;
}
