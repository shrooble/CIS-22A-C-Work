/*
  Victor Li
  Chapter 3: 8 - How Many Widgets?
  This programs determines the amount of widgets on a pallet by dividing the total pallet weight by the weight of a widget
*/

#include <iostream>

using namespace std;

int main() {
  double widgetWeight = 12.5, widgetAmount, emptyPallet, loadedPallet;

  cout << "What is the weight of the empty pallet (lbs):\n";
  cin >> emptyPallet;
  cout << "What is the weight of the loaded pallet (lbs):\n";
  cin >> loadedPallet;

// This calculates the amount of widgets on the pallet by dividing the pallet weight by the weight of a widget
  widgetAmount = (loadedPallet - emptyPallet) / widgetWeight;

  cout << "Number of widgets on the pallet: " << static_cast<int>(widgetAmount) << " widgets\n";

  return 0;
}
