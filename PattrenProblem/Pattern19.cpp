#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        char start='A'+row-1;
        for(int column=1;column<=input;column++){
            char ch=start+column-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
A B C D 
B C D E 
C D E F 
D E F G
*/