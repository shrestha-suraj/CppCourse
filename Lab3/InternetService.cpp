#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the letter of the package (A, B or C): ";
    char choice;
    cin>>choice;
    cout<<"Enter number of hours that were used: ";
    double hours;
    cin>>hours;
    double cost;
    switch (choice){
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
    printf("The total charge is $%.2f.",cost);
    return 0;
}