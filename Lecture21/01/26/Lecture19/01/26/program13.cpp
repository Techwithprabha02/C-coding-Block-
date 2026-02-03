// Q13. Reverse a Number using a While Loop
#include<iostream>
using namespace std;

int main() {
    int num;
    int remain;
    int rev=0;
    cout<<"Enter Number"<<endl;
    cin>>num;

    while(num!=0){
        remain=num%10;
        rev=rev*10+remain;

      
        num=num/10;

    }
    cout<<rev;
    return 0;

}