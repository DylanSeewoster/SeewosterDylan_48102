/* 
 * File:   main
 * Author: Dylan Seewoster
 * Created on 
 * Purpose: Template
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
    char c1,c2,c3,answer;
    int tot;
    
    //prompt user to play blackjack
    cout<<"This program allows you to total a blackjack hand and determine if it is a bust.\n";
    cout<<"Would you like test a blackjack hand? [y/n]\n ";
    cin>>answer;
    
    //receive and process the input
    while(answer == 'y'){
        cout<<"Enter three card values. [(1-9), t=10, j=jack, q=queen, k=king, a=ace]\n";
        cin>>c1>>c2>>c3;
        //validate inputs
        if (c1!='a'&&c1!='t'&&c1!='j'&&c1!='q'&&c1!='k'&&c1!='1'&&c1!='2'&&c1!='3'&&c1!='4'&&c1!='5'&&c1!='6'&&c1!='7'&&c1!='8'&&c1!='9'){
            cout<<"Invalid input\n";
            break;  
        }if (c2!='a'&&c2!='t'&&c2!='j'&&c2!='q'&&c2!='k'&&c2!='1'&&c2!='2'&&c2!='3'&&c2!='4'&&c2!='5'&&c2!='6'&&c2!='7'&&c2!='8'&&c2!='9'){
            cout<<"Invalid input\n";
            break;    
        }if (c3!='a'&&c3!='t'&&c3!='j'&&c3!='q'&&c3!='k'&&c3!='1'&&c3!='2'&&c3!='3'&&c3!='4'&&c3!='5'&&c3!='6'&&c3!='7'&&c3!='8'&&c3!='9'){
            cout<<"Invalid input\n";
            break;    
        }    
        //card one
    
        if(c1=='t'||c1=='j'||c1=='q'||c1=='k'){ //if card one is a face card or 10
            c1=10;
        }else if (c1=='a'){                     //if card 1 is an ace
            c1=11;  
        }else c1=c1-'0';                        //subtract ascii value of '0'
    
        //card two
        if(c2=='t'||c2=='j'||c2=='q'||c2=='k'){ //if card 2 is a face card or 10
            c2=10;
        }else if (c2=='a'){                     //if card 2 is an ace
            c2=11;    
        }else c2=c2-'0';                        //subtract ascii value of '0'
    
        //card three
        if(c3=='t'||c3=='j'||c3=='q'||c3=='k'){ //if card 3 is a face card or 10
            c3=10;
        }else if (c3=='a'){                     //if card 3 is an ace
            c3=11;  
        }else c3=c3-'0';                        //subtract ascii value of '0'    
    
        //if both multiple cards are aces
        if (c1==11&&c2==11){     
            c1=11;c2=1;
            tot=c1+c2+c3;
        }else if (c1==11&&c3==11){
            c1=11;
            c3=1;
            tot=c1+c2+c3;
        }else if (c2==11&&c3==11){
            c2=11;
            c3=1;
            tot=c1+c2+c3;
        }else if (c1==11&&c3==11&&c2==11){
            c1=11;
            c2=1;
            c3=1;
        tot=c1+c2+c3;
        }else tot=c1+c2+c3;
    
        //if an ace is present and the total is above 21, change ace value to 1
        if(c1==11&&tot>=22){    
            c1=1;
            tot=c1+c2+c3;
        }if(c2==11&&tot>=22){   
            c2=1;
            tot=c1+c2+c3;
        }if(c3==11&&tot>=22){   
            c3=1;
            tot=c1+c2+c3;
        }
        //if over 21, display bust message
        cout<<tot<<endl;
        if (tot>=22){
            cout<<"Your hand is a bust.\n";
        }else cout<<"Your hand is not a bust.\n";
        
        cout<<"Would you like to try again [y/n]\n";
        cin>>answer;         
    }
    cout<<"Goodbye!\n";
    
    //return from the function
    return 0;
}

