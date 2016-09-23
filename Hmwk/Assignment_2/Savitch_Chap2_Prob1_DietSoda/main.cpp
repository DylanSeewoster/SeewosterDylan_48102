
/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 * Purpose: Savich chapter 2 problem 1. Find the amount of soda that can be consumed.
 * Created on September 13, 2016, 11:18 AM
 */

#include <iostream>  //input/output
#include <cmath>
using namespace std;

//global constants
const float CNVLBG=453.592f;
const float PERCENT=100;

int main(int argc, char** argv) {

    //Declare Variables
    float humanG,percent,lethDo,lethHum,gPerCan,lethCan;      //converted human mass to grams, percent of dose lethal, grams of sweetener per can, lethal amount in cans
    float mouse=35.0f;   //mouse mass in grams
    int human=100; //human mass in pounds
    int sodyPop=350; //soda mass in grams
    
    
    //process values
    gPerCan=35.0f;
    humanG=human*CNVLBG;
    lethDo=5/mouse*PERCENT;
    lethHum=lethDo*humanG;
    lethCan=humanG/gPerCan;
    
    
    //display outputs
    cout<<"How many cans of soda can a person drink before it becomes lethal?\n";
    cout<<endl;
    cout<<"5 grams of sweetener is lethal to a mouse with a mass of "<<mouse
        <<"g.\n";
    cout<<endl;
    cout<<"Assuming a human has a mass of "<<humanG<<" grams and a soda has "<<gPerCan<<" of sweetener per can,\n";
    cout<<"A human would have to drink "<<lethCan<<" cans of soda for it to be lethal.\n";    
    
    
    
    return 0;
}

