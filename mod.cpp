#include <iostream>
using namespace std;
main(){
int number;
int total;
cout << "Enter four numbers :";
cin >> number;
total = (number/1000)%10 + (number/100)%10 + (number/10)%10 + (number/1)%10;
cout << "Total is :" << total; 
}