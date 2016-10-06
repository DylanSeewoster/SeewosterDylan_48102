/* 
 * File:   main
 * Author: Dylan Seewoster
 * created on October 4th, 9:57 AM
 * Purpose: Calculate an objects weight and display if it's too heavy or lght
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
    float weight,mass;      //mass and weight in newtons
    
    //initialize or input values
    cout<<"What is the objects mass in kilograms?\n";
    cin>>mass;
    
    //process the input by mapping to the output
    weight=mass*9.8;
    
    //display information
    cout<<"The object has a weight of "<<weight<<" newtons.\n";
    if (weight>1000)
        cout<<"Therefore, the object is too heavy.\n";
    if (weight<10)
            cout<<"Therefore, the object is too light.\n";
    //return from the function
    return 0;
}
