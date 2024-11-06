#include<iostream>
using namespace std;
bool solve(int arr[], int s,int e,int key){
if(s>e){
    return false;
}
int mid=(s+e)/2;
if(arr[mid]==key){
    return true;
}
else if(arr[mid]>key){
    return solve(arr,s,mid-1,key);
}
else{
     return solve(arr,mid+1,e,key);
}
}
int main(){
 int arr[5]={1,2,5,9,8};
 if(solve(arr,0,5,10)){
    cout<<"element is found";
 }

 else{
    cout<<"element is not found";
 }
}