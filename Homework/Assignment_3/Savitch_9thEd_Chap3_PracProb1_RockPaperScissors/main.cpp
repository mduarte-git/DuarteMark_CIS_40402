/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
  
    char p1,p2;  
   
    cout<<"Rock Paper Scissors Game\n"<<"Input Player 1 and Player 2 Choices\n";
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

  return 0;
}