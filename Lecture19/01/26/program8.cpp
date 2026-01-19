//Find the Sum of N Natural Numbers
#include<iostream>
using namespace std;

int main() {
    int n;
    int Sum=0;

    cout<<"Enter n"<<" "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
    Sum+=i; 
    }
    cout<<"Sum is:"<<Sum<<endl;
    
}