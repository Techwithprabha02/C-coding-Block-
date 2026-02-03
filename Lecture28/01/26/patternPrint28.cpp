// Ques 28:
// n = 5
//               1
//             2 3 2
//           3 4 5 4 3
//         4 5 6 7 6 5 4
//       5 6 7 8 9 8 7 6 5
#include<iostream>
using namespace std;
int main(){
    int n = 5;
  
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int num = i;num<=2*i-1;num++){
            cout<<num;
        }
        for(int num = 2*i-2;num>=i;num--){
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}