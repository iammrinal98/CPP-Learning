#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    char ch;
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++){
            ch='A'+row-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
A A A A 
B B B B 
C C C C 
D D D D
*/