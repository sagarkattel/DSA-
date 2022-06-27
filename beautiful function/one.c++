// #include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;


int beautifulFunction(int N){
    int a=N;
    int b;
    string str=to_string(a);
    cout<<str<<endl;
    cout<<str.length()<<endl;
    for(int i=str.length()-1;i>=0;i--){
        // cout<<str[i];
        if(str[i]==0){
            b=a/10;
            break;
        }
    }
    cout<<b<<endl;
    cout<<endl;
    // cout<<str.size();
    // for(int i=str.length()-1;i>0;i--){
    //     cout<<i;
    // }
    return 0;
   
}
int main(){
    int N;
    cout<<"ENter the no ";
    cin>>N;
    int result;
    result = beautifulFunction(N);
    cout<<result;
    return 0;
}