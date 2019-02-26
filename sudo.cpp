#include <iostream>
#include<cctype>
#include<cstdlib>
#include<string>
using namespace std;

int main(){

    int x;
    for (int i=0;i<10;i++){
        x=rand()%4;
        cout<<x;
    }
    return 0;
    }