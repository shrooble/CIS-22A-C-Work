/*
  Victor Li
  Team Name: Cat++
  Team Members: Kenny Nguyen
  Chapter 3: 2 - Stadium Seating
  This program calculates the income generated from ticket sales
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int classA = 15, classB = 12, classC = 9, ticketA, ticketB, ticketC;
  double incomeGenerated;
  
  cout << "How many tickets of class A, B, or C tickets were sold?\n";
  cout << "Enter in order of A B C with each input separated by a space, enter 0 if there were no tickets sold:\n";
  cin >> ticketA >> ticketB >> ticketC;

// This calculates the income generated from each ticket class by multiplying with their specific ticket class costs
  incomeGenerated = (ticketA * classA) + (ticketB * classB) + (ticketC * classC);

  cout << "\nThe income generated from ticket sales is: $" << fixed << setprecision(2) << showpoint << incomeGenerated << endl;
  
  return 0;
}
