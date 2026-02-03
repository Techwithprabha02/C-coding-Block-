// #include<iostream>
// using namespace std;

// int main() {
//     int binary,decimal=0,base=1;
//     cin>>binary;

//     while(binary>0) {
//         int n=binary%10;
//         decimal=decimal+n*base;
//         base=base*2;
//         binary=binary/10;
//     }
//     cout<<decimal;
//     return 0;
// }
#include<iostream>
using namespace std;
int main() {
	int N;
	int rev=0;

	cin>>N;

	while(N>0) {
		int rem=N%10;
        rev=rev*10+rem;
		N=N/10;

	}
	cout<<rev;

	return 0;
}