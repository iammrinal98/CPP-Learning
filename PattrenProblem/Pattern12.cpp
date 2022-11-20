#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++){
            char ch='A'+column-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
A B C D 
A B C D 
A B C D 
A B C D 
*/