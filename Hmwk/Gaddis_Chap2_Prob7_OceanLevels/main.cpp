/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 * Created on September 13, 2016. 11:53 AM.
 * Purpose:  Calculate when home owners in riverside will have beach front property.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMMFT = 304.8f; //mm to feet from google.
const float CNVMMM = 1000.0f;  //mm to meter
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declaration of variables with initialization
    float rate=1.5f; // sea level rise rate in mm/year
    char nYear1=5,nYear2=7,nYear3=10; //years to calculate rise
    float rise1,rise2,rise3;
    int nYrBch; //number of years for riverside to be beach front
    float elevRiv=860.0f; //riverside elevation in feet wikipedia
   
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    
    //Display
    cout<<"The rate sea level rise = "<<rate<<"mm/year\n";
    cout<<"After "<<static_cast<int>(nYear1)<<" years the sea will rise "<<rise1<<" mm\n";
    cout<<"After "<<static_cast<int>(nYear2)<<" years the sea will rise "<<rise2<<" mm\n";
    cout<<"After "<<static_cast<int>(nYear3)<<" years the sea will rise "<<rise3<<" mm\n";
    cout<<"At this rate, Riverside won't have beach front property for ";
    cout<<nYrBch<<" years\n";
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters\n";
    //Exit
    return 0;
}
