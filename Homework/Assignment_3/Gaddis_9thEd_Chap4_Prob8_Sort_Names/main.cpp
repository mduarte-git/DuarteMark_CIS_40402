/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */


#include <iostream>  
using namespace std;

int main(int argc, char** argv) {
    
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
    return 0;
}