#include<iostream>
using namespace std;
bool solve(int arr[],int key,int s,int e){
    if(s==e){
        return false;
    }
   if(arr[s]==key){
    return true;
   }
   solve(arr,key,s+1,5);
}
int main(){
    int arr[5]={1,2,9,8,7};
    if(solve(arr,10,0,5)){
        cout<<"element is found";
    }
    else{
        cout<<"element is not found";
    }
}