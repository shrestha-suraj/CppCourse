/* Course: CSCI 259, Section 2
 Student Name: Suraj Shrestha
 Student ID: 010616383
 Program 2 Homework
 Due Date:
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.
 Program Description: This program will play a game of rock, scissor, paper with you. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int pc_num= rand() % 3;
    cout << "Enter 0 for scissors, 1 for rock, and 2 for paper:";
    cin >> user_num;
    if (pc_num == 0 && user_num == 1)
    {
        cout << "The computer is Scissors, you are Rock, you won!";
    }
    else if (pc_num == 0 && user_num == 2)
    {
        cout << "The computer is Scissors, you are Paper, computer won!";
    }
    else if (pc_num == 1 && user_num == 0)
    {
        cout << "The computer is Rock, you are Scissor, computer won!";
    }
    else if (pc_num == 1 && user_num == 2)
    {
        cout << "The computer is Rock, you are Paper, you won!";
    }
    else if (pc_num == 2 && user_num == 0)
    {
        cout << "The computer is Paper, you are Scissor, computer won!";
    }
    else if (pc_num == 2 && user_num == 1)
    {
        cout << "The computer is Scissors, you are Rock, you won!";
    }
    else
    {
        cout << "It's a tie. Play again!";
    }
    return 0;
}