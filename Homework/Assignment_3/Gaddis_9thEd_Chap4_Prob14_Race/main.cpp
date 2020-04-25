/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
// Includes
#include <iostream>

using namespace std;

int main()
{
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
   return 0;
}