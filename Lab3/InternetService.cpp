/* Course: CSCI 259, Section 2
 Student Name: Suraj Shrestha
 Student ID: 010616383
 Lab 3 in class
 Due Date:
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.
 Program Description: Calculates the price based on user input of internet package and amount used per month
*/
#include<iostream>
using namespace std;
//Main method returning  0 for code run
int main(){
    // Asking user for package plan and hours they spent per month. Initilizing the input in variables
    cout<<"Enter the letter of the package (A, B or C): ";
    char choice;
    cin>>choice;
    cout<<"Enter number of hours that were used: ";
    double hours;
    cin>>hours;
    double cost;
    //Switch statement to check the plan choice A, B and C. Run the appropriate switch case
    switch (choice){
        //Internal switch case that has boolean for test case and performs calculation based on the boolean value hours>plan hours
        case 'A': switch (hours>10.0){
                    case true: cost=9.95+(hours-10.0)*2.0;
                        break;
                    case false: cost=9.95;
                        break;
                    }
            break;
        case 'B': switch (hours>20.0){
                    case true: cost=13.95+(hours-20.0)*1.0;
                        break;
                    case false: cost=13.95;
                        break;
                    }
            break;
        case 'C': cost =19.95;
            break;
    }
    //Printing the result at end for output purpose.
    printf("The total charge is $%.2f.",cost);
    return 0;
}