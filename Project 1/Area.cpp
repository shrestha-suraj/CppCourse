/* Course: CSCI 259, Section 2
 Student Name: Suraj Shrestha
 Student ID: 10616383
 Program 1 Homework
 Due Date:2/12/2018
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.
 Program Description: This program is supposed to ask for length of three sides of a triangle
                        in feet and output its area both in square feet and square meters.
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    double x,y,z,s,area_ft,area_mt;
    cout <<"Enter Side x in Feet:";
    cin >> x;
    cout <<"Enter Side y in Feet:";
    cin >> y;
    cout <<"Enter Side z in Feet:";
    cin >> z;
    s=(x+y+z)/2.0;
    area_ft=sqrt(s*(s-x)*(s-y)*(s-z));
    area_mt=area_ft*0.3048*0.3048;
    cout <<"Area is "<<area_ft<<" square feet or "<<area_mt<<" square meters.";
    return 0;
}