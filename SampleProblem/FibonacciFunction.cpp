#include<iostream>
using namespace std;

int GetFibonacci(int n){
    int ans=0;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    int a=0;
    int b=1;

    for(int i=2;i<n;i++){
        ans=a+b;
        a=b;
        b=ans;
    }

    return ans;
}
int main(){
    int input;
    cin>>input;
    cout<<GetFibonacci(input);

}