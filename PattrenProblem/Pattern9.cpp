#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        int value=0;
        for(int column=1;column<=row;column++){
            cout<<row+value<<" ";
            value++;
        }
        cout<<endl;
    }

    //using only two varibale

    for(int row=1;row<=input;row++){
        for(int column=0;column<row;column++){
            cout<<row+column<<" ";
        }
        cout<<endl;
    }
}

/*
4
1
2 3
3 4 5
4 5 6 7
*/