/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 22nd, 11:59 AM
 * Purpose: How many people can be in the room and still meet fire code.
 */

//system libraries
#include <iostream> //standard inout-output library
#include <cmath>
#include <iomanip>

using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants

//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float nPeeps;        //Number of people
    float roomCap;       //Rooms Capacity
    float excess;        //Excess # of people
    float vacant;        //# of people you can still have
    float dif;           //Difference between room cap and # of people
    
    
    //initialize or input values
    cout<<"What is the capacity of the room?\n";
    cin>>roomCap;
    cout<<"How many people will be attending?\n";
    cin>>nPeeps;
    
   
    //process the input by mapping to the output
    dif=roomCap-nPeeps;
    
    if (dif >= 0)
    {
        vacant=dif;
    }    
    else
    {    
        excess=dif*-1;
    }
   
    //display information
    if (roomCap >= nPeeps)
    {    
        cout<<"You can still legally allow "<<vacant<<" people\n";
    }    
    else
    {    
        cout<<"You have too many people, exclude "<<excess<<" person(s) to be legal.\n";
    }    
    //return from the function
    return 0;
}