/* 
 * File:   main
 * Author: Dylan Seewoster
 * Purpose: Calculate the total purchase cost with breakdown of tax and totals
 * Date: September 17, 2016  10:27 AM
 */

//system libraries
#include <iostream> //standard inout-output library
#include <iomanip>  //Formatting
#include <cmath>    //math
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants

//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
   
    //declare variables                                      
    float pItem1=15.95f;                                     //Price per each item
    float pItem2=24.95f;                                     //  |
    float pItem3=6.95f;                                      //  |
    float pItem4=12.95f;                                     //  |
    float pItem5=3.95f;                                      //  V        
    float taxD=1.07f;                                        //tax in decimal form for equation
    float taxP=7;                                            //tax in integer form for display
    float subTot;                                            //subtotal before tax
    float tot;                                               //total with tax
   
    //initialize or input values
    subTot=(pItem1+pItem2+pItem3+pItem4+pItem5);             //total of all products
    tot=(pItem1+pItem2+pItem3+pItem4+pItem5)*taxD;           //total of products with tax
    
    //process the input by mapping to the output
    
    //display information
    cout<<"Prices per item: $"<<setw(5)<<pItem1<<endl;       //output prices of each item using setw for formating
    cout<<"                 $"<<setw(5)<<pItem2<<endl;       //  |
    cout<<"                 $"<<setw(5)<<pItem3<<endl;       //  |
    cout<<"                 $"<<setw(5)<<pItem4<<endl;       //  |
    cout<<"                 $"<<setw(5)<<pItem5<<endl;       //  V
    cout<<setfill('_')<<setw(25)<<"_"<<endl;                 //make a fancy line
    cout<<"Subtotal         $"<<setw(5)<<subTot<<endl;       //output pre-taxed subtotal
    cout<<setfill(' ')<<setw(0)<<"";                        //undo that stupid line
    cout<<"Tax:                 %"<<taxP<<endl;               //output tax (7%)
    cout<<setfill('_')<<setw(25)<<"_"<<endl;                 //building that fancy little line again
    cout<<"Total after tax: $"<<tot<<endl;                   //total with decimal
    cout<<"Total rounded:   $"<<ceil(tot*100)/100;           //rounded up
    
    //return from the function
    return 0;
}