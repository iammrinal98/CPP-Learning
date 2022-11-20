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
        int star=input-row+1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        cout<<endl;
    }
}

/*
4
* * * * 
  * * * 
    * * 
      * 
*/