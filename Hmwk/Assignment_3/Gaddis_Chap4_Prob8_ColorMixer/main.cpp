/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on October 5, 11:21 PM.
 * Purpose: Combine two primary colors and output another color.
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
    
    string c1,c2;    //input colors
    
    //initialize or input values
    cout<<"Enter two primary colors (red,yellow,blue).\n";
    cin>>c1>>c2;
    //process the input by mapping to the output
    if ((c1=="red")&&(c2=="blue")||(c1=="blue")&&(c2=="red")){
        cout<<"Red and blue makes purple.\n";
    }if ((c1=="yellow")&&(c2=="blue")||(c1=="yellow")&&(c2=="blue")){
        cout<<"Yellow and blue makes green.\n";
    }if ((c1=="red")&&(c2=="yellow")||(c1=="yellow")&&(c2=="red")){
        cout<<"Red and yellow makes orange\n";
    }    
        
    
    //display information
    
    //return from the function
    return 0;
}