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
        int number=input-row+1;
        while(number){
            cout<<row<<" ";
            number--;
        }
        cout<<endl;
    }
}

/*
4
1 1 1 1 
  2 2 2 
    3 3 
      4 
*/