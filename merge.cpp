#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[],int arr3[],int n, int m){
    int i=0;
    int j=0;
    int k=0;
   while(i<n && j<m){
     if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;k++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
   }
   while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
   }
 while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
   }
   for(int p=0;p<k;p++){
    cout<<arr3[p]<<" ";
   }
}
void union(int arr1[], int arr2[],int arr3[],int n, int m){
    int i=0;
    int j=0;
    int k=0;
   while(i<n && j<m){
     if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;k++;
    }
    else if(arr1[i]==arr2[j]){
        arr3[k]=arr1[i];
        i++;
        j++;
        k++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
   }
   while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
   }
 while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
   }
   for(int p=0;p<k;p++){
    cout<<arr3[p]<<" ";
   }
}
int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
    int arr3[50]={};
    merge(arr1,arr2,arr3,3,3);
    union(arr1,arr2,arr3,3,3);
}