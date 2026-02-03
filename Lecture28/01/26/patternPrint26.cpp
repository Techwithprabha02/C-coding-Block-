// Ques 26:
// n = 5
//             1
//           1 2 3
//         1 2 3 4 5
//       1 2 3 4 5 6 7
//     1 2 3 4 5 6 7 8 9

#include<iostream>
using namespace std;

int main() {
    int n=5;
     for(int i=1;i<=n;i++) {
        for(int j=0;j<=n-i+1;j++) {
            cout<<" ";
        }
        for(int k=1;k<=i;k++) {
        cout<<k;
        }
        for(int j=1;j<i;j++) {
            cout<<j+i;
        }
       
        cout<<endl;
        
    }

    
    return 0;

}