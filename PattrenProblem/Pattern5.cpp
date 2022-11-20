#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    int count=1;
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/