#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        int num = arr[i];
        int num1 = arr[n-i-1];
        arr[i]=num1;
        arr[n-i-1]=num;
        
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}