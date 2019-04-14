/*  Course:CSCI 259
    Student Name: Suraj Shrestha
    Student ID: 10616383
    Program5 (Homework)
    Due Date:04/16/2019
    In keeping with the Honor Code of UM, I have neither given nor received assistance from 
    anyone otherthan the instructor.
    Program Description: This program displays the prime numbers between 1 - 100 where each
    number is passed into a function to be checed if prime or not and the displayed to output screen.
*/
//header files
#include <iostream>
using namespace std;

// function to check number is prime and pass boolean value accordingly
bool isPrime(int num)
{
    int divideCount = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            divideCount++;
        }
    }
    if (divideCount == 1)
    {
        return true;
    }
    return false;
}

// main functin
int main()
{
    // Necessary variable decelerations and initializations
    cout << "The prime numbers from 1 through 100: " << endl;
    int count = 0;
    // For loop to pass each number from 2 to 100 in the function as parameter and display result accordingly.
    for (int i = 2; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            count++;
        }
    }
    cout <<endl;
    printf("There are %d prime numbers.\n",count);
    return 0;
}