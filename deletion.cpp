#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void deletion(int arr[],int n, int index){
for(int i=index;i<n-1;i++){
    arr[i]=arr[i+1];
}
}
int main(){
    cout<<"Ayush Tiwari 2021B0101073 CSE-A"<<endl;
     int n;
     int index=2;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    traversal(arr, n);
    cout<<endl;
    deletion(arr, n, index);
    cout<<endl;
    n--;
    traversal(arr, n);
    return 0;
}