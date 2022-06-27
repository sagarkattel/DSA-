#include<iostream>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    int swap[3];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        swap[i]=arr[i+1];
        swap[i+1]=arr[i-1];
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<swap[i]<<" ";
    }
}