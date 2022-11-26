#include<iostream>
using namespace std;
int main(){
    cout<<"Ayush tiwari 2021B0101073 CSE-A"<<endl;
    cout<<endl;
    int c[20];
    int m, n,c2;
    
     cout<<"Enter the size of first array :- ";
     cin>>m;
     int arr1[m];
     cout<<"Enter the first array elements : ";
     for(int i=0;i<=m-1;i++){
         cin>>arr1[i];
     }
     cout<<"Enter the size of second array :- ";
     cin>>n;
     int arr2[n];
     cout<<"Enter the second array elements : ";
     for(int j=0;j<=n-1;j++){
        cin>>arr2[j];
    }
    
    //logic
      int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
 
        else if (arr2[j] < arr1[i])
            j++;
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    return 0;
}
