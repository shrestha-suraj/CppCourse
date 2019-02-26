#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the weight of your package (pounds): ";
    double weight;
    cin>>weight;
    double shipCharge;
    if (weight<=1 && weight >0)
        shipCharge=3.5;
    else if (weight>1 && weight<=3)
        shipCharge=5.5;
    else if (weight>3 && weight<=10)
        shipCharge=8.5;
    else if (weight>10 && weight <=20)
        shipCharge=10.5;
    else
        shipCharge=-1.0;
    if (shipCharge==-1.0)
        cout<<"Package cannot be shipped."<<endl;
    else
    {
        cout<<"Shipping rate: $"<<shipCharge<<endl;
        double cost=shipCharge*weight;
        cout<<"Charge: $"<<cost<<endl;
    }
    return 0;
}