// Q6. Grade Card Program (Based on Marks)
#include<iostream>
using namespace std;

int main() {
    int M3,VD,CAO,OODA;
    cout<<"Enter the marks"<<" ";
    cin>>M3>>VD>>CAO>>OODA;

    int Percentage=(M3+VD+CAO+OODA)*100/400;

    cout<<"Percentage"<<Percentage<<" ";
    int score=Percentage/10;

    switch(score) {
        case 10:

        case 9:
        cout<<"Grade A"<<endl;
        break;

        case 8:
        cout<<"Grade B"<<endl;
        break;

        case 7:
        cout<<"Grade C"<<endl;
        break;

        case 6:
        cout<<"Grade D"<<endl;
        break;

        default :
        cout<<"fail"<<endl;
   }
 return 0;
}