/*
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
*/

#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product=1;
    int sum=0;

    while(n){
        int reminder=n%10;
        product=product*reminder;
        sum=sum+reminder;
        n=n/10;
    }
    return product-sum;
}

int main(){
    int input;
    cin>>input;
    cout<<subtractProductAndSum(input);
}