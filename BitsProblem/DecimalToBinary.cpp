#include<iostream>
#include<math.h>
using namespace std;

int ConvertDecimalToBinary(int n){

    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1; //to cehck the last bit 0 or 1
        ans=(bit* pow(10,i))+ans; //reverse the bit
        n=n>>1; //right shift by 1 to get the latest last bit
        i++;
    }
    return ans;
}
int main(){
    int input;
    cin>>input;
    cout<<ConvertDecimalToBinary(input);
}