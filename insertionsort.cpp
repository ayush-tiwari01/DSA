#include<iostream>
using namespace std;
void isort(int a[],int n){
    for(int i=1;i<n;i++){
     int t=a[i];
     int j=i-1;
     while(j>=0 && a[j]>t){
        a[j+1]=a[j];
        j--;
     }  
     a[j+1]=t; 
    }
   
}
void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
     // -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Sorted array is: ";
    isort(a,n);
    display(a, n);
}
