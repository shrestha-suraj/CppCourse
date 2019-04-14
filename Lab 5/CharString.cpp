/*Course: CSCI 259, 
    Section 2
    Student Name: Suraj Shrestha
    Student ID: 10616383
    Lab 5 in class
    Due Date:  
    In keeping with the Honor Code of UM, I have neithergiven nor 
    received assistancefrom anyone otherthan the instructor.
    Program Description: This program promts user t input a string and an integer.
    If the integer is on the given range of string, it uses a function call to get the character
    at the index or if else returns that the index in invalid.
    */
#include<iostream>
#include <string>
using namespace std;
//showChar() function taeks two input and gives character as output
char showChar(string inputString,int index){
    return inputString[index];
}

int main(){
    // User prompts
    string inpString;
    cout<<"Enter a string: ";
    getline(cin,inpString);
    int strIndex;
    cout<<"Enter and Index: ";
    cin>>strIndex;
    // If condition to check the index validation and calling function accordingly
    if(strIndex>=inpString.size()){
        cout<<"Invalid index!"<<endl;
    }
    else{
        cout<<"The character at index "<<strIndex<<" in "<<inpString<<" is "<< showChar(inpString,strIndex); // Function call is here
    }
}