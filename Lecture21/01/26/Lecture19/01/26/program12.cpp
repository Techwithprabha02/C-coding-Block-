//12 Find the Sum of Digits of a Given Number using a Loop
#include<iostream>
using namespace std;

int main() {
    int num;
    int remain;
    int sum=0;
    cout<<"Enter Number"<<endl;
    cin>>num;

    while(num!=0){
        remain=num%10;
         sum+=remain;
        num=num/10;

    }
    cout<<sum;
    return 0;

}