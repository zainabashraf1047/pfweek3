#include <iostream>
using namespace std;
main(){
float vegperkg;
float frtperkg;
int totalveg;
int totalfrt;

cout << "Enter vegetable price per kg : ";
cin >> vegperkg;
cout << "Enter fruit price per kg :";
cin >> frtperkg;
cout <<"Total kgs of vegetable :";
cin >> totalveg;
cout << "Total kgs of fruit :";
cin >> totalfrt;

float vegcost ;
float frtcost ;
float total;
vegcost = 0.194 * totalveg ;
frtcost = 19.4 * totalfrt;
total = vegcost + frtcost;




}