#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
           return i;
        }
    }
   return -1;
}
int binarysearch(int arr[], int n, int key){
int s=0;
int e=n;
while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        e= mid-1;
    }
    else{
        s=mid+1;
    }
    
}
return -1;
}
int main(){
    cout<<"Ayush tiwari , 2021B0101073, CSE-A"<<endl;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the to be searched"<<endl;
    cin>>key;
   int x= binarysearch(arr, n, key);
   cout<<x<<endl;
   cout<<linearsearch(arr,n,key)<<endl;
}