#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"The elements of array are ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int ch;
    cout<<"1. Ascending order"<<endl;
    cout<<"2. Descending order"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;

    switch(ch){
    case 1: 
        for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    cout<<"In ascending order: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    break;

    case 2:
     for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    cout<<"In decending order: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    break;

    default:
    cout<<"invalid";
    }
return 0;
}