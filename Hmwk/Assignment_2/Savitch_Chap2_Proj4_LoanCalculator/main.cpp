/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 23rd, 10:03
 * Purpose: calculate the proper face value of a loan
 */

//system libraries
#include <iostream> //standard inout-output library
#include <cmath>    //For rounding
#include <iomanip>  //for setprecison
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants

//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float amNeed;       //amount needed
    float faceVal;      //face value
    float inter;        //interest
    float dur;            //duration on loan in months
    float modInt;       //converted interest
    float minPay;       //minimum payment per month
    float convY;        //convert to year
    
    //initialize or input values
    cout<<"Calculating a discount installment loan\n";
    cout<<"________________________________________\n";
    cout<<"How much money do you need?\n";
    cin>>amNeed;
    cout<<"What is the interest (as a whole integer)\n";
    cin>>inter;
    cout<<"What is the duration of the loan in months?\n";
    cin>>dur;
    //process the input by mapping to the output
    convY=dur/12;
    modInt=inter/100;
    faceVal=amNeed/(1-(modInt*convY));
    minPay=faceVal/dur;
    
    //display information
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Face value:           $"<<faceVal<<endl;
    cout<<"Min monthly payments: $"<<ceil(minPay*100)/100<<endl;      //rounded up
    
            
    //return from the function
    return 0;
}