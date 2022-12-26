#include <iostream>
using namespace std;
main(){
int bagSize;
int bagCost;
int area;
int costPerPound;
int costArea;


cout << "Enter Bag Size in Pounds:";
cin >> bagSize;
cout << "Enter cost of the bag:";
cin >> bagCost;
cout << "Enter area covered by each bag in square feet:" ;
cin >> area;

costPerPound = bagCost / bagSize;
costArea = bagCost / area; 

cout << "Cost of fertilizer per pound: " << costPerPound << endl ;
cout << "Cost of fertilizing the area per squae feet : " << costArea ;
 
}