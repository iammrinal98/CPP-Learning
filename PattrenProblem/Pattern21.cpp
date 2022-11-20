#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        int star=input-row+1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        cout<<endl;
    }
}

/*
4
* * * *
* * *
* *
*
*/