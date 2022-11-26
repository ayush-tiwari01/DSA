#include<iostream>
using namespace std;
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
int length(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
int main(){
    char name[20];
    int n=5;
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length is :"<<length(name);
    cout<<endl;
   reverse(name,n);
    cout<<"your name is "<<name<<endl;
    
    
    
}