#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    traversal(arr, n);
}