#include<iostream>
using namespace std;
int main(){
    int n,fact=1,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[10];

    for(int i=1;i<=n;i++){
        fact = fact*i;
        arr[i]=fact;
    }
    cout<<fact;
    for(int i=1;i<=n;i++){
        sum = sum + arr[i];
    }
    cout<<"sum is "<<sum;

}
