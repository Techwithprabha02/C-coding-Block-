// Ques 30:
// n = 5
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main() {
    int n;
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}