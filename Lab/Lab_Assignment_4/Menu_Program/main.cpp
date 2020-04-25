#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){
    char choice;
    
    cout<<"Menu for Homework Assignment #3"<<endl;
    cout<<"Type 1 for Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;  
    cout<<"Type 4 for Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cin>>choice;
    
    switch(choice){
       
        case '1': {
  const int c_size = 10;
  char firstName[c_size], 
       secondName[c_size],
       thirdName[c_size];

	
	cout << "Sorting Names\n"<<"Input 3 names\n";
	cin >> firstName >> secondName >> thirdName;

	if (strcmp(firstName, secondName) < 0)
		if (strcmp(firstName, thirdName) < 0)
			cout <<firstName<<endl<<secondName<<endl<<thirdName;
		else
			cout <<firstName<<endl<<thirdName<<endl<<secondName;
	else if (strcmp(secondName, thirdName) < 0)
		if (strcmp(thirdName, firstName) < 0)
			cout <<secondName<<endl<<thirdName<<endl<<firstName;
		else
			cout <<secondName<<endl<<firstName<<endl<<thirdName;
	else if (strcmp(thirdName, firstName) < 0)
		if (strcmp(firstName, secondName) < 0)
			cout <<thirdName<<endl<<firstName<<endl<<secondName;
		else
			cout <<thirdName<<endl<<secondName<<endl<<firstName;
	else
		cout << "Error\n";
}
 break;
 //--------------------------------------------------------------------------------//
        case '2':{
    int books_purchased;
    
        cout<<"Book Worm Points\n"<<"Input the number of books purchased this month.\n";
    
        cin>>books_purchased;
    
        cout<<"Books purchased =  "<<books_purchased<<endl;
    
        if(books_purchased == 0)
        cout<<"Points earned   = 0";
        else if(books_purchased == 1)
        cout<<"Points earned   = 5";
        else if(books_purchased == 2)
        cout<<"Points earned   = 15";
        else if(books_purchased == 3)
        cout<<"Points earned   = 30";
        else if(books_purchased >= 4)
        cout<<"Points earned   = 60";
    
        else
    {
        cout<<"Invalid number";
    }
        }
 break;
//--------------------------------------------------------------------------------//        
        case '3':{
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
 }
break;
//--------------------------------------------------------------------------------//
         case '4':{
    string run1, run2, run3;
    double time1, time2, time3;
    cout << "Race Ranking Program\n"<<"Input 3 Runners\n"<<"Their names, then their times\n";
   
    cin >> run1 >> time1;
    cin >> run2 >> time2;
    cin >> run3 >> time3;
 
if(time1< 0){
    return 1;
}
if(time2< 0){
    return 1;
}
if(time3< 0){
    return 1;
}
{    //check if runner one came in first
if(time1 < time2 && time1 < time3)
  {
    if(time2 < time3) //if he did, then check to see where run2 and run3 placed
     {
        cout<<run1<<"\t"<<time1<<endl;
        cout<<run2<<"\t"<<time2<<endl;
        cout<<run3<<"\t "<<time3;
     }
    else
     {
        cout<<run1<<"\t"<<time1<<endl;
        cout<<run3<<"\t "<<time3<<endl;
        cout<<run2<<"\t"<<time2;
     }
  }
}
{ // check if 2 came first
if(time2 < time1 && time2 < time3)
  {
    if(time1 < time3) //if he did, then check to see where run1 and run3 placed
     {
        cout<<run2<<"\t"<<time2<<endl;
        cout<<run1<<"\t"<<time1<<endl;
        cout<<run3<<"\t "<<time3;
     }
    else
     {
        cout<<run2<<"\t"<<time2<<endl;
        cout<<run3<<"\t "<<time3<<endl;
        cout<<run1<<"\t"<<time1;
     }
  }
}
{ // check if 3 came first
if(time3 < time1 && time3 < time2)
  {
    if(time2 < time1) //if he did, then check to see where run1 and run2 placed
     {
        cout<<run3<<"\t "<<time3<<endl;
        cout<<run2<<"\t"<<time2<<endl;
        cout<<run1<<"\t"<<time1;
     }
    else
     {
        cout<<run3<<"\t "<<time3<<endl;
        cout<<run1<<"\t"<<time1<<endl;
        cout<<run2<<"\t"<<time2; 
     }
  }
}    
 }
break;
//--------------------------------------------------------------------------------//
         case '5':{
string package;
 float time;
 float price;
    cout<<"ISP Bill\n"<<"Package A: For $9.95 per month 10 hours of access are provided. Additional hours\n"<<"are $2.00 per hour."<<endl<<endl<<
            "Package B: For $14.95 per month 20 hours of access are provided. Additional hours\n"<<"are $1.00 per hour."<<endl<<endl<<
            "Package C: For $19.95 per month unlimited access is provided.\n"<<"Write a program that calculates a customer’s monthly bill. It should ask which package\n"<<
            "the customer has purchased and how many hours were used. It should then display\n"<<"the total amount due."<<endl<<endl<<
            "Input Package and Hours\n";
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
break;
//--------------------------------------------------------------------------------//
         case '6':{
char p1,p2;  
   
    cout<<"Rock Paper Scissors Game\n"<<"Input Player 1 and Player 2 Choices\n"<<"Use R,P,S"<<endl;
    cin>>p1>>p2;
    p1=((p1>=97)?p1-32:p1);
    
    switch(p1==p2){
        case true:{
            cout<<"Nobody wins";
            break;
        }
        case false:{
            switch(p1){
                case 'R':{
                    switch(p2){
                        case 'P':{
                            cout<<"Paper covers rock.";
                            break;
                        }
                        case 'S':{
                            cout<<"Rock breaks scissors.";
                            break;
                        }
                    }
                    break;
                }
                case 'P':{
                     switch(p2){
                        case 'R':{
                            cout<<"Paper covers rock.";
                            break;
                        }
                        case 'S':{
                            cout<<"Scissors cuts paper.";
                            break;
                        }
                    }
                    break;
                }
                case 'S':{
                     switch(p2){
                        case 'P':{
                            cout<<"Scissors cuts paper.";
                            break;
                        }
                        case 'R':{
                            cout<<"Rock breaks scissors.";
                            break;
                        }
                    }
               }
            }
        }
    }           
 }
break;
//--------------------------------------------------------------------------------//
          case '7':{
   unsigned short n2Cnvrt;
    
   cout<<"Arabic to Roman numeral conversion."<<endl<<"Input the integer to convert."<<endl<<"Inbetween 1000 and 3000"<<endl;
   
   cin>>n2Cnvrt;
   
   if(n2Cnvrt>=1000 && n2Cnvrt<=3000)
   {
       
       cout<<n2Cnvrt<<" is equal to ";
       
    unsigned char n1000s,n100s,n10s,n1s;
        n1000s=n2Cnvrt/1000;
        n100s=(n2Cnvrt-n1000s*1000)/100;
        n10s=(n2Cnvrt-n1000s*1000-n100s*100)/10;
        n1s=n2Cnvrt%10;
        
        switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
    }
        
        cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
        
        if(n10s==9)cout<<"XC";
        if(n10s==8)cout<<"LXXX";
        if(n10s==7)cout<<"LXX";
        if(n10s==6)cout<<"LX";
        if(n10s==5)cout<<"L";
        if(n10s==4)cout<<"XL";
        if(n10s==3)cout<<"XXX";
        if(n10s==2)cout<<"XX";
        if(n10s==1)cout<<"X";
        
        if(n1s==9)cout<<"IX";
        else if(n1s==8)cout<<"VIII";
        else if(n1s==7)cout<<"VII";
        else if(n1s==6)cout<<"VI";
        else if(n1s==5)cout<<"V";
        else if(n1s==4)cout<<"IV";
        else if(n1s==3)cout<<"III";
        else if(n1s==2)cout<<"II";
        else if(n1s==1)cout<<"I";
    
    }
    
    else
    
    {
        cout<<n2Cnvrt<<" is Out of Range!";
    }        
 }
break;
//--------------------------------------------------------------------------------//
          case '8':{
              cout<<"Incomplete"<<endl;
 }
break;
//--------------------------------------------------------------------------------//
        default:
            cout<<"Not an Option"<<endl;
    }
            return 0;
}