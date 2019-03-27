#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main(){
    string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"Enter three names, seperate them with a space: ";
    string name1,name2,name3;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    string names[3];
    names[0]=name1;
    names[1]=name2;
    names[2]=name3;
    int index[3];
    for (int i=0;i<3;i++){
        string eachName=names[i];
        for (int j=0;j<26;j++){
            if (eachName[0]==alpha[j]){
                index[i]=j+1;
            }
        }
    }
    int max,min,mid;
    if (index[0]>index[1] && index[1]>index[2]){
        max=0;
        mid=1;
        min=2;
    }
    else if (index[1]>index[2] && index[2]>index[0]){
        max=1;
        mid=2;
        min=0;
    }
    else if (index[0]>index[1] && index[1]>index[2]){
        max=2;
        mid=0;
        min=1;
    }
    else if (index[0]>index[2] && index[2]>index[1]){
        max=0;
        mid=2;
        min=1;
    }
    else if (index[1]>index[0] && index[0]>index[2]){
        max=1;
        mid=0;
        min=2;
    }
    else if (index[2]>index[1] && index[1]>index[0]){
        max=2;
        mid=1;
        min=0;
    }
    

    cout<<"The three names in ascending order: "<<names[min]<<"  "<<names[mid]<<"  "<<names[max]<<endl;
    cout<<"Print the alphabetically last name three times: ";
    for (int k=0;k<3;k++){
     cout<< names[max]<<"  ";   
    }


    return 0;
}