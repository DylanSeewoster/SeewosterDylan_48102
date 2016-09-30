/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 23rd, 2:55 PM
 * Purpose: Find net income if there's overtime and after tax
 */

//system libraries
#include <iostream> //standard inout-output library
#include <iomanip>  //formatting, setprecision
#include <cmath>
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
const float PERCENT=100.0f;
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float perHour=16.78f;                                     //wages per hour (dollars)
    float hours,overTiH,overTiW,income,grossI,netInc,netIncD; //hours worked, Overtime hours and wage, income without overtime, gross income, net income, net with dependants
    float socSecT=0.06f;                                      //social security tax
    float fedTax=0.14f;                                       //Federal income tax
    float stateT=0.05f;                                       //state income tax
    float uniDue=10.0f;                                       //union dues
    unsigned short inDep;                                     //input number of dependants
    float depWith=35.0f;                                      //amount withheld if you have 3 or more dependants

    //initialize or input values
    cout<<"How many hours did you work this week?\n";
    cin>>hours;
    cout<<"How many dependants do you have?\n";
    cin>>inDep;
    
    //process the input by mapping to the output
    if (hours>40)                                   //If the input hours exceeds 40 and overtime is required
    {    
        overTiH=hours-40;
        overTiW=overTiH*(perHour*1.5);
        income=40*perHour;
        grossI=income+overTiW;
    }
    else                                           //if the input hours is sub 40 hours
    {
        grossI=perHour*hours;
    }
       
    if (inDep >= 3)                               //if the number of occupants is greater then 3, subtract 35 from net income
    {
        netInc=grossI-((grossI*socSecT)+(grossI*fedTax)+(grossI*stateT))-uniDue-depWith;
    }
    else
    {
        netInc=grossI-((grossI*socSecT)+(grossI*fedTax)+(grossI*stateT))-uniDue;  
    }
    
    //display information
    cout<<setprecision(2)<<fixed<<showpoint;                                                    //setprecision to 2 places after decimal
    cout<<"Total gross income:                        $"<<setw(7)<<grossI<<endl;
    cout<<"Social Security Tax:                       %"<<setw(7)<<socSecT*PERCENT<<endl;
    cout<<"Federal Income Tax:                        %"<<setw(7)<<fedTax*PERCENT<<endl;       
    cout<<"State Income Tax:                          %"<<setw(7)<<stateT*PERCENT<<endl;
    cout<<"Union Due:                                 $"<<setw(7)<<uniDue<<endl;
    if (inDep >= 3)                                                                            //if 3 or more dependants
    {    
        cout<<"Health insurance for 3 or more dependants: $"<<setw(7)<<depWith<<endl;
    }            
    cout<<"__________________________________________________________\n";
    cout<<"Total net income:                          $"<<setw(7)<<netInc<<endl;
    //return from the function
    return 0;
}