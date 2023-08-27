#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    int a=n;
    int sum=0, remainder;
/*
WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]
*/

// reverse
    for(int i=1;n>0;i++){
        remainder = n%10;
        sum = sum*10 + remainder;
        n=n/10;
    }
    cout<<"Original Number : "<<a<<endl;
    cout<<"Reverse Number : "<<sum<<endl;
    cout<<"Sum of original & reverse number : "<<a+sum<<endl;

}