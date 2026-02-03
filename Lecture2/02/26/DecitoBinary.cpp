#include<iostream>
using namespace std;

int main() {
    int binary=0,decimal,base=1;
    cin>>decimal;

    while(decimal>0) {
        int x=decimal%2;
        binary=binary+x*base;
        base=base*10;
        decimal=decimal/2;
        
    }
    cout<<binary;
    return 0;
}  