#include<iostream>
using namespace std;

int GetSetBit(int a,int b){
    int ans=0;
    int count=0;

    while(a!=0){
        int bit=a&1;
        if(bit)
            count++;
        a=a>>1;
    }

    while(b!=0){
        int bit=b&1;
        if(bit)
            count++;
        b=b>>1;
    }

    return count;
}
int main(){
    int input1,input2;
    cin>>input1>>input2;

    cout<<GetSetBit(input1,input2);
}