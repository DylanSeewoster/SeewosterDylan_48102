/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on October 6th, 10:12 AM
 * Purpose: Determine discount for quantity purchased
 */

//system libraries
#include <iostream> //standard inout-output library
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
float const PERCENT=100.0f;
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float quant,tot,disc,ogP;
    int cost=99;
    //initialize or input values
    cout<<"What quantity did you purchase?\n";
    cin>>quant;
    //process the input by mapping to the output
    if (quant>=10&&quant<=19){
        ogP=cost*quant;
        disc=ogP*.20;
        tot=ogP-disc;
        cout<<"The discount is 20% and the total is $"<<tot<<endl;
    }else if (quant>=20&&quant<=49){
        ogP=cost*quant;
        disc=ogP*.30;
        tot=ogP-disc;
        cout<<"The discount is 30% and the total is $"<<tot<<endl;
    }else if (quant>=50&&quant<=99){
        ogP=cost*quant;
        disc=ogP*.40;
        tot=ogP-disc;
        cout<<"The discount is 40% and the total is $"<<tot<<endl;
    }else if (quant>=100){
        ogP=cost*quant;
        disc=ogP*.50;
        tot=ogP-disc;
        cout<<"The discount is 50% and the total is $"<<tot<<endl;
    }
    //display information
    
    //return from the function
    return 0;
}