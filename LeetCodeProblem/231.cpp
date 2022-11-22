/*
https://leetcode.com/problems/power-of-two/description/
https://leetcode.com/problems/power-of-three/description/
https://leetcode.com/problems/power-of-four/description/
*/

#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n){
    int ans=0;

    for(int i=0;i<=30;i++){ //range based on 2^(31-1)
        ans=pow(2,i);
        if(ans==n)
            return true;
    }
    return false;
}
//without using pow
bool isPowerOfTwo(int n){
    int ans=0;

    for(int i=0;i<=30;i++)
    {
        if(ans==n)
            return true;
        if(ans<INT32_MAX/2)
            ans=ans*2; //for 2(30)*2 it will exceed the limit
    }
    return false;
}
int main(){
    int input;
    cin>>input;
    cout<<isPowerOfTwo(input);
}