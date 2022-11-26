#include<iostream>
using namespace std;
int insertion(int arr[], int n, int y, int index){
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=y;
    return 1;
}
void display(int arr[], int n){
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"Ayush Tiwari , 2021B0101073 CSE -A"<<endl;
    cout<<endl;
    int n;
     
      int y=4;
      int index = 1;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr, n);
    cout<<endl;
    insertion( arr, n, y, index);
    n++;
    cout<<endl;
    display(arr, n);
 return 0;
}