// Q10. Find the Factorial of a Number
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int fact=1 ;

    for(int i=1;i<=n;i++) {
        fact=fact*i;
    
    }
    cout<<"factorial is :"<<fact<<" ";
    
  return 0;
}