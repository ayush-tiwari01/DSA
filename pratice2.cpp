#include<iostream>
using namespace std;
void printarray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapalternate(int *arr, int n){
    int ans=1;
    for(int i=0;i<n;i=i+2){
      ans=ans^arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,1};
    int n=5;
    printarray(arr,5);
    swapalternate(arr,5);
    cout<<endl;
    printarray(arr,5);

}