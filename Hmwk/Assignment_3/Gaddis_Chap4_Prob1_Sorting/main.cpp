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
    unsigned short q1,q2,q3,q4;
    //initialize or input values
    cout<<"Enter four numbers (press enter after each number).\n";
    cin>>q1;
    cin>>q2;
    cin>>q3;
    cin>>q4;
    
    //process the input and display output
    if ((q1<q2)&&(q2<q3)&&(q3<q4)){
        cout<<q1<<q2<<q3<<q4;
    }
    else if ((q1<q2)&&(q2<q4)&&(q4<q3)){
        cout<<q1<<q2<<q4<<q3;
    }
     else if ((q1<q3)&&(q3<q2)&&(q3<q4)){
        cout<<q1<<q3<<q2<<q4;
    }
     else if ((q1<q3)&&(q3<q4)&&(q3<q2)){
        cout<<q1<<q3<<q4<<q2;
    }
     else if ((q1<q4)&&(q4<q3)&&(q3<q2)){
        cout<<q1<<q4<<q3<<q2;
    }
     else if ((q1<q4)&&(q4<q2)&&(q2<q3)){
        cout<<q1<<q4<<q2<<q3;
    }
    //___________________________________
    else if ((q2<q1)&&(q1<q3)&&(q3<q4)){
        cout<<q2<<q1<<q3<<q4;
    }
     else if ((q2<q1)&&(q1<q4)&&(q4<q3)){
        cout<<q2<<q1<<q4<<q3;
    }
     else if ((q2<q3)&&(q3<q1)&&(q1<q4)){
        cout<<q2<<q3<<q1<<q4;
    }
     else if ((q2<q3)&&(q3<q4)&&(q4<q1)){
        cout<<q2<<q3<<q4<<q1;
    }
     else if ((q2<q4)&&(q4<q1)&&(q1<q3)){
        cout<<q2<<q4<<q1<<q3;
    }
     else if ((q2<q4)&&(q4<q3)&&(q3<q1)){
        cout<<q2<<q4<<q3<<q1;
    }
     //___________________________________
    else if ((q3<q1)&&(q1<q2)&&(q2<q4)){
        cout<<q3<<q1<<q2<<q4;
    }
     else if ((q3<q1)&&(q1<q4)&&(q4<q2)){
        cout<<q3<<q1<<q4<<q2;
    }
     else if ((q3<q2)&&(q2<q1)&&(q1<q4)){
        cout<<q3<<q2<<q1<<q4;
    }
     else if ((q3<q2)&&(q2<q4)&&(q4<q1)){
        cout<<q3<<q2<<q4<<q1;
    }
     else if ((q3<q4)&&(q4<q1)&&(q1<q2)){
        cout<<q3<<q4<<q1<<q2;
    }
     else if ((q3<q4)&&(q4<q2)&&(q2<q1)){
        cout<<q3<<q4<<q2<<q1;
    }
    //___________________________________
    else if ((q4<q1)&&(q1<q2)&&(q2<q3)){
        cout<<q4<<q1<<q2<<q3;
    }
     else if ((q4<q1)&&(q1<q3)&&(q3<q2)){
        cout<<q4<<q1<<q3<<q2;
    }
     else if ((q4<q2)&&(q2<q3)&&(q3<q1)){
        cout<<q4<<q2<<q3<<q1;
    }
     else if ((q4<q2)&&(q2<q1)&&(q1<q3)){
        cout<<q4<<q2<<q1<<q3;
    }
     else if ((q4<q3)&&(q3<q2)&&(q2<q1)){
        cout<<q4<<q3<<q2<<q1;
    }
     else if ((q4<q3)&&(q3<q1)&&(q1<q2)){
        cout<<q4<<q3<<q1<<q2;
    }
    
    //return from the function
    return 0;
}