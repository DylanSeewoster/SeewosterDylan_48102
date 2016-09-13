/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 * Created on September 13, 2016 12:27 PM
 * Purpose:  Calculate the average/mean and standard deviation
 */

//System Libraries 
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants 


//Function Prototypes Here

//Program Execution 
int main(int argc, char** argv) {
    //Declare Variables 
    int x1,x2,x3,x4,x5; //input values
    float avg,stdev;
    
    //Input
    cout<<"This program calculates the mean and standard deviation\n";
    cout<<"Input 5 values\n";
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Process
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=pow(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+(x4-avg)*(x4-avg)+(x5-avg)*(x5-avg))/4,0.5);
    //Output 
    cout<<"The input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"The standard deviation = "<<stdev<<endl;

    //Exit
    return 0;
}

