//simple interest calculation
#include<iostream>
using namespace std;

int main() {
    int Pri,Rate,Time;

    cout<<"Enter Principle:"<<" ";
    cin>>Pri;

    cout<<"Enter Rate:"<<" ";
    cin>>Rate;

    cout<<"Enter time:"<<" ";
    cin>>Time;

    int SI= (Pri*Rate*Time)/100 ;

    cout<<"Simple interest is:"<< SI;

}