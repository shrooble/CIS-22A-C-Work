/*
  Victor Li
  Chapter 3: 6 - Ingredient Adjuster
  This program calculates the amount of ingredients required for a user inputted amount of cookies
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int cookieAmount;
  double sugar = 1.5, butter = 1.0, flour = 2.75;

  cout << "48 cookie requires: " << fixed << setprecision(2) << showpoint << sugar << " cups of sugar, " << butter << " cups of butter, and " << flour << " cups of flour.\n";
  cout << "How many cookies do you want to make:\n";
  cin >> cookieAmount;

// This divides each ingredient by 48 to find the amount required for 1 cookie
  sugar /= 48;
  butter /= 48;
  flour /= 48;

// This calculates the amount of ingredients required for a user inputted amount of cookies
  sugar *= cookieAmount;
  butter *= cookieAmount;
  flour *= cookieAmount;
  
  cout << cookieAmount << " cookies require: " << sugar << " cups of sugar, " << butter << " cups of butter, and " << flour << " cups of flour.\n";
  
  return 0;
}
