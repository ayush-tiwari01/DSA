#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
           cout<<i;
        }
    }
    return -1;
}
int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
int arr[100];
cout<<"enter the array element "<<endl;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
int key;
cout<<"enter the number to be searched"<<endl;
cin>>key;
linearsearch(arr, n, key);
}