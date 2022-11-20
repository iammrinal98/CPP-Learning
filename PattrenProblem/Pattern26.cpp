#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    int count=1;
    for(int row=1;row<=input;row++){
        int space=input-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int column=row;
        while(column){
            cout<<count<<" ";
            count++;
            column--;
        }
        cout<<endl;
    }
}

/*
4
      1 
    2 3 
  4 5 6
7 8 9 10
*/