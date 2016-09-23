

/* 
 * File:   main.cpp
 * Author: Dylan Seewoster
 *
 * Created on September 8, 2016, 11:42 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //declare variable
    char s=' ';
    char c;
    
    //input values
    cout<<"what character would you like to use to make a Big C?, input\n";
    cin>>c;
    
    //display output
    cout<<s<<s<<c<<c<<c<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<s<<s<<c<<c<<c<<endl;
    
    return 0;
}

