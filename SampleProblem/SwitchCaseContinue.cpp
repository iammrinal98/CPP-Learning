#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    while(input!=0){
        switch(input){
            case 1:
                cout<<input<<endl;
                continue; //using continue will trigger the loop without exit, don't use continue in while loop.
            case 2:
                cout<<input<<endl;
                break;
            default:
                cout<<"Default"<<endl;
                break;
        }
        exit(0);
    }
}