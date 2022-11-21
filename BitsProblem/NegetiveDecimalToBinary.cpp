#include<iostream>
#include<math.h>
using namespace std;

int ConvertDecimalToBinary(int n){
    n=n*(-1);

    int ans=0;
    int i=0;

    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    int onesComplement=~ans;
    int twosComplement=onesComplement+1;
    return twosComplement;
}

int main(){
    int input;
    cin>>input;
    cout<<ConvertDecimalToBinary(input);
}