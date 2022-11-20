#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        for(int column=0;column<input;column++)
            cout<<input-column<<" ";
        cout<<endl;
    }
}

/*
4
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/