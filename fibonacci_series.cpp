#include<iostream>
using namespace std;
int DAT[101];
int fib(int n){
   if(n==1||n==2){
    return DAT[n]=n-1;
   }
    else{
       if(DAT[n]==0)
       DAT[n]=(fib(n-1)+fib(n-2));
    }
    return DAT[n];
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<" "<<fib(i)<<" "<<endl;
    }

}
//for reduce time complexity we use this method if we apply normal method it takes huge time .