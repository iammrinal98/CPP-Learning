#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    int firstFibNumber=0;
    int secondFibNumber=1;
    cout<<firstFibNumber<<" "<<secondFibNumber<<" ";

    for(int i=0;i<input;i++){
        int nextFibNumber=firstFibNumber+secondFibNumber;
        cout<<nextFibNumber<<" ";

        firstFibNumber=secondFibNumber;
        secondFibNumber=nextFibNumber;
    }
}