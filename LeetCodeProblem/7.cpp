/*
https://leetcode.com/problems/reverse-integer/
*/

#include<iostream>
using namespace std;

int reverse(int n) {
    long long output=0;

    while(n!=0){
        int reminder=n%10;
        output=output*10+reminder;
        if(output>=INT32_MAX || output<=INT32_MIN){
            return 0;
        }
        n=n/10;
    }
    int result=output;
    return result;
}

int main(){
    int input;
    cin>>input;
    cout<<reverse(input);
}