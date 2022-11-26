#include<iostream>
using namespace std;
int main(){
    int c,r,s=0;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    c=n;
    while(n>0){
        r=n%10;
        s=(10*s+r);
        n=n/10;
    }
    if(c==s){
        cout<<"this is a palindrome number";
    }
    else{
        cout<<"This is not a palindrome number";
    }
}