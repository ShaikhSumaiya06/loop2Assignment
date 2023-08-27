#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,c;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){        
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
}