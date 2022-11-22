#include<iostream>
using namespace std;

int main(){
    int firstInput,secondInput;
    char operation;
    cin>>firstInput>>secondInput;
    cin>>operation;

    switch(operation){
        case '+':
            cout<<firstInput+secondInput<<endl;
            break;
        case '-':
            cout<<firstInput-secondInput<<endl;
            break;
        case '*':
            cout<<firstInput*secondInput<<endl;
            break;
        case '/':
            cout<<firstInput/secondInput<<endl;
            break;
        case '%':
            cout<<firstInput%secondInput<<endl;
            break;
        default:
            cout<<"Not a valid operation"<<endl;
            break;
    }

}