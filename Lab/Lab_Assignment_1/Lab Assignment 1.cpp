/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mark Duarte
 * Professor Lehr
 * CSC-5 40402
 * 
 * Created on March 2, 2020, 5:13 PM
 */

#include <iostream>
using namespace std;

int main()
{
    float milBdgt,fedBdgt,mlPrcnt; 
    
    milBdgt=7.0e11f; 
    
   //Military Budget= 700 Billion
    
    fedBdgt=4.1e12f; 
    
    //Federal Budget= 4.1 Trillion
    
    
    mlPrcnt = (milBdgt/fedBdgt)*100; 
    
    cout<< "Military Budget as a percentage of the Federal Budget=" <<mlPrcnt;
    
    cout<< "%";
    
    return 0;
}


