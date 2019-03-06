/* Course: CSCI 259, Section 2
 Student Name: Suraj Shrestha
 Student ID: 010616383
 Program 3 (Homework)
 Due Date: March 5, 2019
 In keeping with the Honor Code of UM, I have neither given nor received assistance from
anyone other than the instructor.
 Program Description: This program prompts the user for both the amount of USD as well as the country for which they would like to 
 exchange currency and depending on the exchange rate it outputs the amount converted into that foreign currency.
*/
// Importing preprocessors
#include <string>
#include <iostream>
using namespace std;

int main()
{
    //GEtting user inputs and putting them in appropriate variables
    cout << "Select Select a country:\nEnter B for Britain\nEnter C for China\nEnter F for France\nEnter I for Italy\nEnter J for Japan\nEnter S for Switzerland" << endl;
    char choice;
    cin >> choice;
    cout << "Enter the amount of money to exchange: $";
    double usAmount;
    cin >> usAmount;
    //Declaring the currency name and exchange rate
    string cName;
    double exchangeR;
    // Using switch to determine and initialize the exchange rate and currency rate using specific letter to represent a country
    switch (choice)
    {
    case 'B':
        cName = "British Pounds";
        exchangeR = 0.77;
        break;
    case 'C':
        cName = "Yuans";
        exchangeR = 6.74;
        break;
    // France and Italy having same exhange rate and currency name
    case 'F':
        cName = "Euros";
        exchangeR = 0.88;
        break;
    case 'I':
        cName = "Euros";
        exchangeR = 0.88;
        break;
    case 'J':
        cName = "Yens";
        exchangeR = 109.80;
        break;
    case 'S':
        cName = "Francs";
        exchangeR = 1.01;
        break;
    //Default value assigned to see if  user never choose letter from the option
    default:
        exchangeR = 0.0;
    }

    //Switch statement to check the exchange rate value and assign the result depending on the boolean cases
    switch (exchangeR == 0.0)
    {
    case true:
        cout << "ERROR!! The letter you entered doesnot fall on the category." << endl;
        break;
    case false:
        cout << "USD to " << cName << ": $" << usAmount << " = " << (exchangeR * usAmount * 1.00) << " " << cName << endl;
    }
    return 0;
}