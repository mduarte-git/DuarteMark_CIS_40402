/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int checks;
 double beginningBalance, feeOne, feeTwo, totalFees,b_charge;

 cout <<"Monthly Bank Fees\n"<<"Input Current Bank Balance and Number of Checks"<<endl;
 cin>> beginningBalance;
 cin>> checks;

b_charge =10;
 cout << setprecision(2) << fixed;
 if(beginningBalance < 0)
    cout << "URGENT MESSAGE! YOUR ACCOUNT IS OVERDRAWN!"<<endl;
 else
 {
 
 if(beginningBalance < 400)
    feeOne = 15.00;
 else
 feeOne = 0.00;
 if(checks <0)
    return 1;
 if(checks >= 0 && checks < 20)
     feeTwo = checks * 0.10;
 if(checks >= 20 && checks <= 39)
    feeTwo = checks * 0.08;
 if(checks >= 40 && checks <= 59)
    feeTwo = checks * 0.06;
 if(checks >= 60)
    feeTwo = checks * 0.04;
 
 totalFees = beginningBalance - (feeOne + feeTwo + b_charge);

 cout<<"Balance     $   "<<beginningBalance<<endl;
 cout<<"Check Fee   $     "<<feeTwo<<endl;
 cout<<"Monthly Fee $    "<<b_charge<<endl;
 cout<< "Low Balance $    " << feeOne << endl;
 cout<< "New Balance $    " << totalFees;
 }

 return 0;
 }
