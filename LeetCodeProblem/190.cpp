/*
https://leetcode.com/problems/reverse-bits/description/
*/

#include<iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans=0;
    for(int i=0;i<32;i++){
        ans=ans<<1;
        int lastBit=n&1;
        ans+=lastBit;
        n>>=1;
    }
    return ans;
}

int main(){
    uint32_t input;
    cin>>input;
    cout<<reverseBits(input);
}