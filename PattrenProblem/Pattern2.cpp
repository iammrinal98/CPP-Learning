#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    //using for loop
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++)
            cout<< row << " ";
        cout<<endl;
    }

    //using while loop
    int row=1;
    
    while(row<=input){
        int column=1;
        while(column<=input){
            cout<< row << " ";
            column++;
        }
        cout<<endl;
        row++;
    }
}

/*
4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/