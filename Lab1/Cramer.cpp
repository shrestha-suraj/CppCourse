/* Course: CSCI 259, Section 2
Student Name: Suraj Shrestha
Student ID: 010616383
Lab 1 in class
Due Date: 2/5/2019
In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.
Program Description: Lab1 
*/

#include <iostream>
using namespace std;

int main(){
    double a,b,c,d,e,f,X,Y;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter d: ";
    cin >> d;
    cout << "Enter e: ";
    cin >> e;
    cout << "Enter f: ";
    cin >> f;
    X=(e*d-b*f)/(a*d-b*c);
    Y=(a*f-e*c)/(a*d-b*c);
    cout << "\nIn the following equation\n";
    cout << a <<"x+"<<b<<"y="<<e<<"\n";
    printf("x = %.1f\ny = %.1f",X,Y);
    return 0;
}