#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int n){

    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10; //machine consider binary input as decimal
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10; ////machine consider binary input as decimal
        i++;
    }
    return ans;
}
int main(){
    int input;
    cin>>input;
    cout<<BinaryToDecimal(input);
}