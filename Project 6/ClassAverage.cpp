/* Course:CSCI 259
   Student Name: Suraj Shrestha
   Student ID:10616383
   Program 6 (Homework)
   Due Date:April 23,2019
   In keeping with the Honor Code of UM, I have neither given nor 
   received assistance from anyone otherthan the instructor.
   Program Description: This program promts user to enter the desired number of grades and calls a method called
                        char average(int grades[], int num) to get the letter grade for whole class and display it.     
*/
//header
#include <iostream>
using namespace std;
//method decleration
char average(int grades[], int num);
//main method
int main()
{   //Propting users for number of grades to enter. Using for loop to get all those grades and put in array.
    cout << "How namy grades do you want to enter? ";
    int counter;
    cin >> counter;
    int grades[counter];
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }
    // Calling average method with paremeters as array of grades and total number of grades. Displaying result accordingly.
    char result = average(grades, counter);
    cout << "\nThe class average for the test is: " << result << endl;
    return 0;
}

// Content of average method.
char average(int grades[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += grades[i];
    }
    double average = sum / (num * 1.0);
    if (average >= 90)
    {
        return 'A';
    }
    if (average >= 80 && average < 90)
    {
        return 'B';
    }
    if (average >= 70 && average < 80)
    {
        return 'C';
    }
    if (average >= 60 && average < 70)
    {
        return 'D';
    }
    if (average < 60)
    {
        return 'F';
    }
}
