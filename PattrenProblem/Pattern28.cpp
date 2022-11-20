#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        //print first half number
        int number_f=input-row+1;
        int column=1;
        while(number_f){
            cout<<column<<" ";
            column++;
            number_f--;
        }
        //print first half star
        int star_f=row-1;
        while(star_f){
            cout<<"*"<<" ";
            star_f--;
        }
        //print second half star
        int star_s=row-1;
        while(star_s){
            cout<<"*"<<" ";
            star_s--;
        }
        //print second half number
        int number_s=input-row+1;
        while(number_s){
            cout<<number_s<<" ";
            number_s--;
        }
        cout<<endl;
    }
}

/*
5
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 
*/