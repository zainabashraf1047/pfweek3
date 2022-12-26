#include <iostream>
using namespace std;
main(){
int velocity;
int acc;
int time;
int vf;
 cout << "Enter Initial velocity:";
cin >> velocity;
 cout << "Enter Acceleration:";
cin >> acc;
 cout << "Enter time:";
cin >> time;
vf = (acc * time) + velocity;
cout << "Final velocity is:" << vf;



}