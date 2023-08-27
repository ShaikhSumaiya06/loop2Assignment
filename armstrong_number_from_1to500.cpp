#include<iostream>
using namespace std;
int main(){
    /*
    Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
Output :
1
153
370
371
407
    */
    int sum=0,r;
    for(int i=1;i<=500;i++){
        int temp=i;
        while(temp>0){
            r=temp%10;
            sum += r*r*r;
            temp/=10;
        }
        if(i==sum) cout<< i <<endl;
    }
}