/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on September 22nd, 11:50 AM
 * Purpose: Calculate the pay increase for employees with ability to input months of retroactive pay
 */

//system libraries
#include <iostream> //standard inout-output library
#include <iomanip>  //For Setprecision

using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
const float P_RAISE=7.6f;   //Pay increase
const float CNVMY=12.0f;      //Month to year Conversion
const float PERCENT=100.0f;
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    float ogASal;       //Original annual salary
    float ogMSal;       //Original monthly salary
    float nuMSal;       //New Monthly Salary
    float nuASal;       //New annual salary
    float rePay;        //Retroactive Pay
    float rePayIn;      //months for retroactive pay
    
    //initialize or input values
    cout<<"Please enter your current annual salary (using whole integers and without characters).\n";
    cin>>ogASal;
    cout<<"Please enter the numbers of months for retroactive pay.\n";
    cin>>rePayIn;
    
    //process the input by mapping to the output
    ogMSal=ogASal/CNVMY;
    nuASal=ogASal*P_RAISE/PERCENT+ogASal;
    nuMSal=nuASal/CNVMY;
    rePay=(nuMSal-ogMSal)*rePayIn;                  //Retroactive pay back for inputed months
    
    //display information
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Original Annual Salary:  $"<<ogASal<<endl;
    cout<<"Original Monthly Salary: $"<<ogMSal<<endl;
    cout<<"New Annual Salary:       $"<<nuASal<<endl;
    cout<<"New Monthly Salary:      $"<<nuMSal<<endl;
    cout<<"Retroactive Pay:         $"<<rePay<<endl;
    
    //return from the function
    return 0;
}