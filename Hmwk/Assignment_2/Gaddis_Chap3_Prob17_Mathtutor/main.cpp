
/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 *
 * Created on September 15, 2016, 11:29 AM
 */
#include <iostream>     //Input/output
#include <cstdlib>      //Random number seed
#include <ctime>        //Seed random number generation
using namespace std;    //Name-space used in the system


int main(int argc, char** argv) {
    
    //set the random number
    srand(static_cast<unsigned int>(time(0)));
    
    //declared variables
    unsigned short op1,op2,result,answer;
    
    //input values
    op1=rand()%900+100;
    op2=rand()%900+100;
    
    //process values -> map inputs to outputs
    result = op1+op2;
    
    //display output
    cout<<"Solve the following addition problem\n";
    cout<<"  "<<op1<<endl;
    cout<<"+ "<<op2<<endl;
    cout<<"------\n";
    
    //ask user for answer
    cout<<"What is the answer?\n";
    cin>>answer;
    cout<<endl;
    
    //determine if correct or not
    cout<<"The answer is "<<(result==answer?"Correct":"Incorrect")<<endl;
    cout<<"The answer was = "<<result<<endl;
    
    //exit
    return 0;
}

