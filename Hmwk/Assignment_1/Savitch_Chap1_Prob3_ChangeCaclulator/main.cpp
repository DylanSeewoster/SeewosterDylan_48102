

/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 * Project: Savitch chapter 1 Change Calculator
 * Created on September 9, 2016, 3:48 PM
 */

#include <iostream>  //input and output
#include <iomanip> //

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float quart = .25;
    float dime = .10;
    float nickel = .05;
    float number;
    float number1;
    float number2;
    float qTot;
    float dTot;
    float nTot;
    float total;
    
    //Input values  
    cout<<"How many Quarters do you have?\n";
    cin>>number;
    cout<<"How many Dimes do have?\n";
    cin>>number1;
    cout<<"How many Nickels do you have?\n";
    cin>>number2;
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2);
    qTot=number*quart;
    dTot=number1*dime;
    nTot=number2*nickel;
    total=qTot+dTot+nTot;
    
    //Display Output
    cout<<"__________________________\n";
    cout<<"Quarters     = $"<<qTot<<endl;
    cout<<"Dimes        = $"<<dTot<<endl;
    cout<<"Nickels      = $"<<nTot<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"Total Change = $"<<total<<endl;
    cout<<"__________________________\n";
    
    //Exit Program
    return 0;
}

