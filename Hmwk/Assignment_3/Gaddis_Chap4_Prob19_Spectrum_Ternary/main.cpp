/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 29, 12:01
 * Purpose: Determine band of radiation with given inputed wavelength
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
    float waveLen;
    string band;
    
    //initialize or input values
    cout<<"Input wave length of radiation in meters?\n";
    cout<<"This program determine the band of radiation.\n";
    cin>>waveLen;
    
    //process the input by mapping to the output
   
      band=(waveLen>1e-2f)?"Radio Band":
           (waveLen>1e-3f)?"Microwave Band":
           (waveLen>7e-7f)?"Infra-red Band":
           (waveLen>4e-7f)?"Visible Band":
           (waveLen>1e-8f)?"Ultra-Violet Band":
           (waveLen>1e-11f)?"X-ray Band":"Gamma-Ray Band";
      
      
    
    //display information
      cout<<band;
    //return from the function
    return 0;
}