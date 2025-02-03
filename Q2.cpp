// Write a program that performs the following operations on an array:
1. Accept an integer array from the user
2. Reverse the array and display it
3. Find and display the second largest and second smallest element in the array


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,s;
    cin>>a;
    
    int arr[a];
    for (int i=0;i<=a-1;i++){
        cin>>arr[i];
    }
    cout<<'{';
    for(int i=0;i<=a-1;i++){
        if(i<=a-2){
            cout<<arr[i];
            cout<<',';
        }
        else {
            cout<<arr[i];   
        }
    }
    cout<<'}'<<endl;  
    cout<<'{';
    for(int x=a-1;x>=0;x--){
        if(x>=1){
            cout<<arr[x];
            cout<<',';
        }
        else {
            cout<<arr[x];   
        }
    }
    cout<<'}'<<endl; 
    s=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+s);
    cout<<arr[1]<<endl<<arr[a-2];
    return 0;
}