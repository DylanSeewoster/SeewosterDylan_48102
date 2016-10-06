/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on 
 * Purpose: Template
 */

//system libraries
#include <string>
#include <iostream> //standard inout-output library
#include <iomanip>    //setprecision
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants

//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float cost;                               //,cost of call.
    unsigned short lenCall,tOfDayH,tOfDayM;   //length of call, time of day minutes/hours
    char colon;                               //semi colon
    string dayOfW;                            //day of week.
  
    //initialize or input values
    cout<<"What day if the week are you making the call?\n";                    //Day of the week input
    cout<<"Ex: Mo,Tu,We,Th,Fr,Sa,Su\n";                                         //   |
    cin>>dayOfW;                                                                //   V
    cout<<"What time of day are you making the call\n";                         //Time of day input. Hour : Minutes
    cout<<"Enter in 24 hour notation (Ex: 1:00 PM = 13:00)\n";                  //   |
    cin>>tOfDayH>>colon>>tOfDayM;                                               //   V
    cout<<"How many minutes did the call last?\n";                              //Length of the call in minutes
    cin>>lenCall;                                                               //   V
   
    //process the input by mapping to the output   
    if(dayOfW == "sa" || dayOfW == "Sa" || dayOfW == "su" || dayOfW == "Su"){                                                                                     //If on weekend, multiply length of call by .15
         cost=lenCall*.15; 
    }else{
       if(tOfDayH>=8||(tOfDayH<=18&&tOfDayM<=0)){
           cost=lenCall*.40;
       }else if(tOfDayH<8||(tOfDayH>=18&&tOfDayM>0)){
           cost=lenCall*.25;
       }
    }
    
    //display information
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The call will cost you $"<<cost<<endl;
    //return from the function
    return 0;
}