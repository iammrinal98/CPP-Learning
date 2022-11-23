#include<iostream>
using namespace std;

int GetMin(int arr[],int size){
    int min=INT32_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int GetMax(int arr[],int size){
    int max=INT32_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int main(){
    int size;
    cin>>size;
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<GetMax(arr,size)<<endl;
    cout<<GetMin(arr,size)<<endl;
}