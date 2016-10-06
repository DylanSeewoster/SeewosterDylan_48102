/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on October 4th, 10:15 AM
 * Purpose: Determine how many days are in the given month during given year
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
    unsigned short year,month;
    
    //input values
    cout<<"Enter a month (1-12).\n";
    cin>>month;
    
    cout<<"Enter a year between 1500-3000.\n";
    cin>>year;
   
    //Input Validation
    if (month>13||month<1)
        cout<<"Invalid month.\n";
    if (year>3000||year<1500)
        cout<<"Invalid year.\n";
    //process the input by mapping to the output
    switch(month){
        case 1: cout<<"There are 31 days in January, "<<year<<endl;break;
        case 2: cout<<"There are "<<
                  ((((year%4==0)&&(year%100!=0))||(year%400==0))?"29":"28")<<
                  " days in February, "<<year<<endl;
            break;
        case 3: cout<<"There are 31 days in March, "<<year<<endl;break;
        case 4: cout<<"There are 30 days in April, "<<year<<endl;break;
        case 5: cout<<"There are 31 days in May, "<<year<<endl;break;
        case 6: cout<<"There are 30 days in June, "<<year<<endl;break;
        case 7: cout<<"There are 31 days in July, "<<year<<endl;break;
        case 8: cout<<"There are 31 days in August, "<<year<<endl;break;
        case 9: cout<<"There are 30 days in September, "<<year<<endl;break;
        case 10: cout<<"There are 31 days in October, "<<year<<endl;break;
        case 11: cout<<"There are 30 days in November, "<<year<<endl;break;
        case 12: cout<<"There are 31 days in December, "<<year<<endl;break;
    }
    
    //display information
    
    
    //return from the function
    return 0;
}