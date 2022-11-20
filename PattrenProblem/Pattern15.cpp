#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        for(int column=1;column<=row;column++){
            char ch='A'+row-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
A 
B B 
C C C 
D D D D 
*/