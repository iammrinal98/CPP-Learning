/*
https://leetcode.com/problems/complement-of-base-10-integer/description/
*/

#include<iostream>
using namespace std;

int bitwiseComplement(int n){
    int ans=0;
    int mask=0;
    int temp=n;

    //edge case
    if(n==0)
        return 1;

        
    while(temp!=0){
        mask=(mask<<1)|1; //first left shift mask=0 and add(or) 1 into it
        temp=temp>>1; //right shift to make the number 0
    }

    ans=mask&(~n); //get the complement of n and use and operator to update the remaining 1 as 0

    return ans;
}

int main(){
    int input;
    cin>>input;
    cout<<bitwiseComplement(input);
}