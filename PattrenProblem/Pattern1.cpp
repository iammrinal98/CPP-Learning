#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=0;row<input;row++){
        for(int column=0;column<input;column++)
            cout<<"*"<<" ";
        cout<<endl;
    }
}

/*
4
* * * *
* * * *
* * * *
* * * *
*/