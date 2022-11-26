#include<iostream>
using namespace std;
int main(){
    int n;
    int a=1;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array element is"<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=a){
            cout<<"the missing  number in the array is"<<a;
            break;
        }
        a++;
    }

}