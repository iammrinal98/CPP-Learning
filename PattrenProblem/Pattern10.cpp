#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        for(int column=0;column<row;column++){
            cout<<row-column<<" ";
        }
        cout<<endl;
    }

    //without cloumn=0
    for(int row=1;row<=input;row++){
        for(int column=1;column<=row;column++){
            cout<<row-column+1<<" ";
        }
        cout<<endl;
    }
}

/*
4
1
2 1
3 2 1
4 3 2 1
*/