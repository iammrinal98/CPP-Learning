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
        int number=row;
        while(number){
            cout<<row<<" ";
            number--;
        }
        cout<<endl;
    }
}

/*
4
      1 
    2 2 
  3 3 3 
4 4 4 4
*/