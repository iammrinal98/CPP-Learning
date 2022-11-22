#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    while(input!=0){
        switch(input){
            case 1:
                cout<<input<<endl;
                break;
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