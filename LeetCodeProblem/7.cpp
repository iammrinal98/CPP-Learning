/*
https://leetcode.com/problems/reverse-integer/
*/

#include<iostream>
#include<math.h>
using namespace std;

int reverse(int n) {
    long long output=0;

    while(n!=0){
        int reminder=n%10;

         if(output>INT32_MAX/10 || output<INT32_MIN/10){
            return 0;
        }
        output=output*10+reminder;
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