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
    
    
    //initialize or input values
    cout<<"Input wave length of radiation in meters?\n";
    cout<<"This program determine the band of radiation.\n";
    cin>>waveLen;
    
    //process the input by mapping to the output
    if (waveLen > 1e-2f)cout<<"Radio Band"<<endl;
    else if (waveLen > 1e-3f)cout<<"Microwave Band"<<endl;
    else if (waveLen > 7e-7f)cout<<"Infra-red Band"<<endl;
    else if (waveLen > 4e-7f)cout<<"Visible Band"<<endl;
    else if (waveLen > 1e-8f)cout<<"Ultra-Violet Band"<<endl;
    else if (waveLen > 1e-11f)cout<<"X-Ray Band"<<endl;
    else                     cout<<"Gamma-Ray Band"<<endl;
    
        
    
    //display information

    //return from the function
    return 0;
}