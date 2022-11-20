#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        char rowCh='A'+input-row;
        for(int column=1;column<=row;column++){
            char ch=rowCh+column-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
D 
C D 
B C D 
A B C D 
*/