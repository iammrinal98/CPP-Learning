#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    bool isPrime=true;
    //initialize from 2 as the input is always divide by 1 and itself.
    for(int i=2;i<input;i++){
        if(input%i==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime==true)
        cout<<"is a Prime Number!";
    else
        cout<<"Not a Prime Number!";
}