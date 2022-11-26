#include<iostream>
using namespace std;
void printarray(int arr[], int s, int e){
   
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binarysearch(int arr[], int n,int s, int e, int key){
    //base condition
    printarray(arr,s,e);
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarysearch(arr,n, s,mid-1,key);
    }
    else{
        return binarysearch(arr,n,mid+1, e,key);
    }
    
}

int main(){
    int arr[]={2,4,5,6,8};
    int n=5;
    int key=6;
    cout<<"present or not\n"<<binarysearch(arr,n,0,4,6);
}