#include<iostream>
using namespace std;
int main(){
    cout<<"Ayush Tiwari 2021B0101073 CSE-A"<<endl;
    cout<<endl;
    int a[2][2],b[2][2];
    cout<<"enter the element of first matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix is "<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
            
        }
        cout<<" "<<endl;
    }
  
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           b[i][j]=a[j][i]; 
        }
    }
    cout<<"trnaspose matrix is"<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
    
}