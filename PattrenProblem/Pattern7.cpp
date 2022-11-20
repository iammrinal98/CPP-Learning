#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        for(int column=1;column<=row;column++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

/*
4
1
2 2
3 3 3
4 4 4 4
*/