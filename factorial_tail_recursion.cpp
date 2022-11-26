#include<iostream>
using namespace std;
int fact(int n,int f){
    if(n==1)
    return f;
    else{
        f=f*n;
        return fact(n-1,f);
    }
}
int main(){
    int n,f;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the second number"<<endl;
    cin>>f;
    int x=fact(n,f);
    cout<<x;

}