\

/* 
 * File:   main.cpp
 * Author: Dylan
 * Purpose: Savitch Add and Multiply Two Integers Chapter 1 Problem 1
 * Created on September 9, 2016, 11:24 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    
    //initialize input variables
    cout<<"Input 2 integer values to add,subtract,multiply,divide,and mod\n";
    cout<<"Enter first integer\n";
    cin>>a;
    cout<<"Enter second integer\n";
    cin>>b;
    
    
    //Display outputs
    cout<<a+b<<"="<<a<<"+"<<b<<endl;
    cout<<a-b<<"="<<a<<"-"<<b<<endl;
    cout<<a*b<<"="<<a<<"*"<<b<<endl;
    cout<<a/b<<"="<<a<<"/"<<b<<endl;
    cout<<a%b<<"="<<a<<"%"<<b<<endl;

    return 0;
}

