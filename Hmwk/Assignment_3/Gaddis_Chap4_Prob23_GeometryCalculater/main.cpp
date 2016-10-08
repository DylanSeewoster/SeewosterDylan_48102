/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on October 6, 11:10 AM
 * Purpose: Template
 */

//system libraries
#include <iostream> //standard inout-output library
#include <cmath>   //pi
using namespace std; //most system libraries under the standard name-space

//user libraries

//global constants
float const PI=3.14159f;
//function prototypes

//Execution begin here.
int main(int argc, char** argv) {
    //declare variables
    short option;
    float area;
    float radius,length,height,width,base;
    //initialize or input values
    cout<<"Geometry Calculator\n";
    cout<<"_____________________\n";
    cout<<"1. Calculate the Area of a Circle\n";
    cout<<"2. Calculate the Area of a Rectangle\n";
    cout<<"3. Calculate the Area of a Triangle\n";
    cout<<"4. Quit\n";
    cout<<"Enter your choice (1-4)\n";
    cin>>option;
    
    //Process input and display output
    if (option == 1){
        cout<<"What is the radius of the circle?\n";
        cin>>radius;
        if (radius<0){
            cout<<"Invalid input\n";
        }else area=PI*pow(radius,2);
              cout<<"The area of the circle is = "<<area<<endl;
        
    }else if (option == 2){
        cout<<"What is the length and width of the rectangle?\n";
        cout<<"Height:\n";
        cin>>length;
        cout<<"Width:\n";
        cin>>width;
        if (length<0||width<0){
            cout<<"Invalid input.\n";
        }else area=length*width;
            cout<<"The area of the rectangle is = "<<area<<endl;
        
    }else if (option == 3){
        cout<<"What is the height and base of the triangle?\n";
        cout<<"Height:\n";
        cin>>height;
        cout<<"Base:\n";
        cin>>base;
        if (height<0 || base<0){
            cout<<"Invalid input.\n";
        }else area=base*height*.5;
              cout<<"The area of the triangle is = "<<area<<endl;
        
    }else if (option == 4){
        cout<<"Goodbye!\n";
    }
   
    
    //return from the function
    return 0;
}