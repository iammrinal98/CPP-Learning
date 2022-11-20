#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        int space=row-1;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int column=row;
        while(column<=input){
            cout<<column<<" ";
            column++;
        }
        cout<<endl;
    }
}

/*
4
1 2 3 4
  2 3 4
    3 4
      4
*/