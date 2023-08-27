#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum=0, remainder=0;

    // the sum of all the even digits of a given number.
    // i/p: 4556 , o/p : 10
    for(int i=1;n>0;i++){
        remainder = n%10;
        if(remainder%2==0) sum=sum+remainder;
        n=n/10;
    }
    cout<<"Sum of even digits : "<<sum;
}