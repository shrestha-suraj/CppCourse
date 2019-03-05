#include <string>
#include <iostream>
using namespace std;

int main(){
    cout<<"Select Select a country:\nEnter B for Britain\nEnter C for China\nEnter F for France\nEnter I for Italy\nEnter J for Japan\nEnter S for Switzerland"<<endl;
    char choice;
    cin>>choice;
    cout<<"Enter the amount of money to exchange: $";
    double usAmount;
    cin>>usAmount;
    string currencyName;
    double exchangeR;
    switch (choice){
        case 'B': currencyName="British Pounds";
                   exchangeR=0.77;
                   break;
        case 'C': currencyName="Yuans";
                   exchangeR=6.74;
                   break;
        case 'F': currencyName="Euros";
                   exchangeR=0.88;
                   break;
        case 'I': currencyName="Euros";
                   exchangeR=0.88;
                   break;
        case 'J': currencyName="Yens";
                   exchangeR=109.80;
                   break;
        case 'S': currencyName="Francs";
                   exchangeR=1.01;
                   break;
        default: exchangeR=0.0; 
    }
    switch (exchangeR==0.0){
        case true: cout<<"ERROR!! The letter you entered doesnot fall on the category."<<endl;
                break;
        case false: printf("USD to %s: $%.2f = %.2f %s",currencyName,usAmount,usAmount*exchangeR,currencyName);
    }
    return 0;
}