/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;
int main() {
 string package;
 float time;
 float price;
 cout<<"ISP Bill\n"<<"Input Package and Hours\n";
 cin>>package>> time;

 if ((package == "A") || (package == "B") || (package == "C")) {
 
 if (time <= 744) {

if (package == "A") {
if (time > 10) {
price = 9.95 + (time - 10) * 2;
} else {
price = 9.95;
}
// Package B
} else if (package == "B") {
if (time > 20) {
price = 14.95 + (time - 20) * 1;
} else {
price = 14.95;
}
// Package C
} else {
price = 19.95;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout <<"Bill = $ " << price;
} 