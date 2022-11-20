#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        int space=input-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        for(int column=1;column<=row;column++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/*
4
      * 
    * * 
  * * *
* * * *
*/