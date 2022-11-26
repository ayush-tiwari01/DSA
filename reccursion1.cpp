// write a program to write 412 write four one two
#include<iostream>
using namespace std;
int wdigit(int n, string arr[]){
    if(n==0){
        return 0;
    }
    int digit = n%10;
    n=n/10;
    wdigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"enter the number"<<endl;
    cin>>n;
    wdigit(n,arr);
}