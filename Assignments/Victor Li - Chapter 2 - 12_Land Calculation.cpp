/*
  Victor Li
  Chapter 2: Land Calculation
  This program calculates and outputs the amount of acres in a tract of land
*/

#include <iostream> 

using namespace std;

int main()
{
  double acre = 43560, land = 391876, landSpace;

  landSpace = land / acre;

  cout << "There are " << landSpace << " acres in the tract of land." << endl;
  
  return 0;
}
