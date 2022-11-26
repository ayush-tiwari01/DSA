#include<iostream>
using namespace std;
int terniarysearch(int arr[], int n, int key){
  int s=0;
  int e=n;
  while(s<=e){
     int mid1 = s + (e - s) / 3;
        int mid2 = e - (e - s) / 3;
          if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }
        if(arr[mid1]>key){
            e=mid1-1;
        }
        else if(arr[mid2]<key){
            s=mid2+1;
        }
        else{
            s=mid1+1;
            e=mid2-1;
        }
  }
  return -1;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the number to be searched"<<endl;
    cin>>key;
    int x=terniarysearch(arr, n, key);
    cout<<x;
}