/*
  Victor Li
  Chapter 3: 8 - How Many Widgets?
  This programs determines the amount of widgets on a pallet by dividing the total pallet weight by the weight of a widget
*/

#include <iostream>

using namespace std;

int main() {
  double widgetWeight = 12.5, widgetAmount, palletWeight;

  cout << "What is the weight of the pallet (lbs):\n";
  cin >> palletWeight;

// This calculates the amount of widgets on the pallet by dividing the total pallet weight by the weight of a widget
  widgetAmount = palletWeight / widgetWeight;

  cout << "Number of widgets on the pallet: " << static_cast<int>(widgetAmount) << " widgets\n";

  return 0;
}
