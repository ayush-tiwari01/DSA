#include<iostream>
using namespace std;
void toh(int n, char a, char b,char c){
if(n>=1){
    toh(n-1,a,b,c );
    cout<<n<<" disk move to"<<a<<"to "<<c<<endl;
    toh(n-1,a,b,c);
}
}
int main(){
    cout<<"Ayush Tiwari 2021B0101073 CSE-A"<<endl;
    cout<<endl;
int n;
cout<<"enter the number"<<endl;
cin>>n;
toh(n,'A','B','C');
return 0;
}