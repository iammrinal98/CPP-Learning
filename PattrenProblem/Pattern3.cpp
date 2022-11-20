#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    //using for loop
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++)
            cout<<column<<" ";
        cout<<endl;
    }

    //using while loop
    int row=1;
    while(row<=input){
        int column=1;
        while(column<=input){
            cout<<column<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
}

/*
4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/