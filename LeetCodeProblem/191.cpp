/*
https://leetcode.com/problems/number-of-1-bits/description/
*/

#include<iostream>
using namespace std;

int hammingWeight(unsigned int n) {
    int count=0;

    while(n!=0){
        //checking last bit
        if(n&1)
            count++;
        n=n>>1;
    }
    return count;
}

int main(){
    unsigned int input;
    cin>>input;
    cout<<hammingWeight(input);
}