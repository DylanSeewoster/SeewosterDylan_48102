/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 29th, 6:18 PM
 * Purpose: Convert Numbers to Roman Numerals
 */

//system libraries
#include <iostream> //standard inout-output library
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants

//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    int number;
    string romNum;
    
    //initialize or input values
    cout<<"What integer (1-10) would you like to convert? \n";
    cin>>number;
    
    //process the input by mapping to the output
    romNum=(number==1)?"I":(number==2)?"II":(number==3)?"III":
           (number==4)?"IV":(number==5)?"V":(number==6)?"VI":
           (number==7)?"VII":(number==8)?"VIII":(number==9)?"IX":"X";   
          
    //display information
    cout<<romNum;
    //return from the function
    return 0;
}