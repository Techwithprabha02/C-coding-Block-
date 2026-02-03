// Ques 17:
// n = 7
// CODING BLOCKS: PATTERN QUESTIONS
// Page No. 7
// * * *   * * *
// * *       * *
// *           *
// *           *
// * *       * *
// * * *   * * *
#include<iostream>
using namespace std;

int main() {
    int n=7;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++) {
            cout<<" ";

        }
        for(int j=1;j<=1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>1;i--) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        for(int k=1;k<=(2*(n-i)-(2*i));k++) {
            cout<<" ";

        }
        for(int j=1;j<=1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }

   
}
