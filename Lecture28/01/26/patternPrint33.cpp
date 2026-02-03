// Ques 33:
// n = 10
 
//                                       0
//                                     9 0 9
//                                   8 9 0 9 8
//                                 7 8 9 0 9 8 7  
//                               6 7 8 9 0 9 8 7 6
//                             5 6 7 8 9 0 9 8 7 6 5
//                           4 5 6 7 8 9 0 9 8 7 6 5 4
//                         3 4 5 6 7 8 9 0 9 8 7 6 5 4 3
//                       2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2
//                     1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1
#include<iostream>
using namespace std;

int main() {
    int n=10;
     for(int i=0;i<=n;i++) {
        for(int j=0;j<=n-i;j++) {
            cout<<"  ";
        }
        int num=n-i;
        for(int k=n-1;k>=1;k--) {
        cout<<num<<" ";
        num--;
        }
        for(int j=0;j<i;j++) {
            cout<<j<<" ";
        }
       
        cout<<endl;
        
    }

    
    return 0;

}