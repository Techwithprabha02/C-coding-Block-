#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;

    while(b!=0) {
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a<<endl;
    return 0;
}

