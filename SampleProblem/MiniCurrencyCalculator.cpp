#include<iostream>
using namespace std;

int main(){
    int input;
    int rs100,rs10,rs1;
    cin>>input;

    switch(1){
        case 1:
            rs100=input/100;
            input%=100;
            cout<<rs100<<endl;
        case 2:
            rs10=input/10;
            input%=10;
            cout<<rs10<<endl;
        case 3:
            rs1=input/1;
            input%=1;
            cout<<rs1<<endl;
    }
}