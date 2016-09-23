
/* 
 * File:   main.cpp
 * Author: Dylan Seewoster 
 * Purpose: Savitch Calculate the distance an object will fall for meters and feet.
 * Created on September 9, 2016, 10:00 PM
 */

//system libraries
#include <iostream> //standard inout-output library
#include <cmath>    
#include <iomanip>  //for set precision
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
const float GRAVITY = 32.174; //gravity constant
const float CNVMTF = 3.28084;  //feet to meters
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float inTime; //time input
    float dist;   //distance traveled
    float places; //places rounded to
    float distM;  //dist in meters
    
    //initialize or input values
    cout<<"How many seconds is the object falling?\n";
    cin>> inTime;        //time the object has fallen
    cout<<"How many places do you want to round to?\n";
    cin>>places;         //places after decimal
    cout<<endl;
    //process the input by mapping to the output
   
    dist = GRAVITY*inTime*inTime/2; //formula for calculating distance
    distM =dist/CNVMTF;             //convert feet to meters
    
    //display information
    cout<<"Falling for "<<inTime<< " second(s)\n";
    cout<<"Rounded to "<<places<<" place(s)\n";
    cout<<endl;
    cout<<fixed<<setprecision(places); //set the decimal place
    cout<<"Falling at a constant of 32 feet a second, The object has fallen "<<dist<<" feet.\n";
    cout<<"Falling at a constant of 32 feet a second, The object has fallen "<<distM<<" meters.\n";

    //return from the function
    return 0;
}