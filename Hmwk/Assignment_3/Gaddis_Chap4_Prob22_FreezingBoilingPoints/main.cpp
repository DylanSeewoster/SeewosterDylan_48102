/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on October 6th, 9:41 AM
 * Purpose: Determine what substances freeze or boil at given temperature
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
    int temp;
    
    //initialize or input values
    cout<<"What is the temperature in Fahrenheit?\n";
    cin>>temp;
    //process the input by mapping to the output
    if (temp<=-173){
        cout<<"Ethyl Alcohol will freeze.\n";
    }else if (temp>=172)
        cout<<"Ethyl Alcohol will boil.\n";
    if (temp<=-38){
        cout<<"Mercury will freeze.\n";
    }else if (temp>=676)
        cout<<"Mercury will boil.\n";
    if (temp<=-362){
        cout<<"Oxygen will freeze.\n";
    }else if (temp>=-306)
        cout<<"Oxygen will boil.\n";
    if (temp<=32){
        cout<<"Water will freeze.\n";
    }else if (temp>=212)
        cout<<"Water will boil.\n";
    //display information
    
    //return from the function
    return 0;
}