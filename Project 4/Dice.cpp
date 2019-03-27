/* Course: CSCI 259
 Student Name: Suraj Shrestha
 Student ID: 010616383
 Program 4 (Homework)
 Due Date: 3/26/2019
In keeping with the Honor Code of UM, I have neither given nor received assistance from
 anyone other than the instructor.
Program Description: This program plays a dice game where one player is user and the other
one is computer itself. Ten rounds are played and who ever gets the big dice in each game by
ramdom generation from 1-6, wins the game.
*/
//Required preprocessor libraries
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{   //given in description
    srand(time(0));
    // Required variables declearation
    int comp_dice, usr_dice, usr_wins = 0, comp_wins = 0;
    for (int i = 0; i < 10; i++)
    {   //Random generation for computer and user dice
        comp_dice = rand() % 6 + 1;
        usr_dice = rand() % 6 + 1;
        // condition to see who won or if its tie and increase the win rate accordingly
        if (comp_dice < usr_dice)
        {
            cout << "Round " << i << ": You won!" << endl;
            usr_wins += 1;
        }
        else if (comp_dice == usr_dice)
        {
            cout << "Round " << i << ": It was a tie!" << endl;
        }
        else
        {
            cout << "Round " << i << ": The computer won!" << endl;
            comp_wins += 1;
        }
    }
    cout << endl;
    // Condition to find who is the GRAND winner and display it.
    if (usr_wins > comp_wins)
    {
        cout << "You won " << usr_wins << " times, the computer won " << comp_wins << " times, you are the GRAND winner!" << endl;
    }
    else if (usr_wins < comp_wins)
    {
        cout << "You won " << usr_wins << " times, the computer won " << comp_wins << " times, computer is the GRAND winner!" << endl;
    }
    else
    {
        cout << "You won " << usr_wins << " times, the computer won " << comp_wins << " times, its a tie!" << endl;
    }
    return 0;
}