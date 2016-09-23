/* 
 * File:   main
 * Author: Dylan Seewoster
 * Time: September 20th, 11:53 AM
 * Purpose: 
 */

//system libraries
#include <iostream>  //standard inout-output library
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>     //computers time
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
const float MAXRAND=pow(2,31)-1; //max signed positive value for int
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //declare variables - float random number (10,100) vs
    //                    integer random number rand()%scale+shift[10,100]
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    //input values
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //display initialization 
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    
    //format
    cout<<fixed<<setprecision(4)<<showpoint;
    
    //First pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;          //counts each pass and is later displayed with <<counter
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";
    
    //Next pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";//First pass
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //display information
    cout<<"Pass "<<counter<<" [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]\n";
    
    //The answer or solution is
    cout<<"The sqrt of ("<<n<<")= "<<sqrt(n)<<endl;
    
    //return from the function
    return 0;
}