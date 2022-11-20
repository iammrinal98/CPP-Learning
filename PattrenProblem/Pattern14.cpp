#include<iostream>
using namespace std;

int main(){
    int input;
    cin>>input;

    for(int row=1;row<=input;row++){
        char rowCh='A'+row-1;
        for(int column=1;column<=input;column++){
            char ch=rowCh+column-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //using two variable
    for(int row=1;row<=input;row++){
        for(int column=1;column<=input;column++){
            //formula : row+cloumn-1=1
            //adding 'A' : row+column-1+'A'=1+'A'
            //removing 1 from both side : row+column-1+'A'-1=1+'A'-1
            //final formula : row+column+'A'-2='A'
            char ch='A'+row+column-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

/*
4
A B C D 
B C D E 
C D E F 
D E F G
*/