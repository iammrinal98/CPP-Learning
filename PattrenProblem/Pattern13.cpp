#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    int count=0;
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++){
            char ch='A'+count;
            cout<<ch<<" ";
            count++;
        }
        cout<<endl;
    }
}

/*
4
A B C D
E F G H
I J K L
M N O P
*/