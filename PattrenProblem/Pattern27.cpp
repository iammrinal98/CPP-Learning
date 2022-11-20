#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        //first space triangle
        int space=input-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //second triangle
        int column=1;
        while(column<=row){
            cout<<column<<" ";
            column++;
        }
        //third triangle
        int start=row-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
}

/*
4
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/