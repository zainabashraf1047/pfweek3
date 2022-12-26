#include <iostream>
using namespace std;
main(){
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
float tm = 500.00;
float percentage;
float pf = 0;
cout << "Enter your name:";
cin >> name;
cout << "Enter subject 1 marks:";
cin >> sub1;
cout << "Enter subject 2 marks:" ;
cin >> sub2;
cout << "Enter subject 3 marks:" ;
cin >> sub3;
cout << "Enter subject 4 marks:";
cin >> sub4;
cout << "Enter subject 5 marks:";
cin >> sub5;

percentage = (sub1 + sub2 + sub3 + sub4 + sub5 ) / tm ;

cout << "Name:" << name << endl;
pf = percentage * 100;
cout << "Percentage is:" << pf; 
}