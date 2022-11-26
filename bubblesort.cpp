#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
int pivotindex= s+cnt;
swap(arr[pivotindex],arr[s]);
int i=s, j=e;
while(i<pivotindex && j>pivotindex){
while(arr[i]<pivot){
    i++;
}
while(arr[j]>pivot){
    j--;
}
if(i<pivotindex && j>pivotindex){
    swap(arr[i++], arr[j--]);
}
}
return pivotindex;
}
void quicksort(int arr[], int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr, s, e);
    quicksort(arr, s,p-1);
    quicksort(arr, p+1, e);
}
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            int temp = arr[minindex];
            arr[minindex] = arr[i];
            arr[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

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
void bubblesort(int arr[],int n){
        for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    cout<<"Ayush tiwari 2021B0101073 CSE-A"<<endl;
    cout<<endl;
    int n,p;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array element is "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubblesort(arr,n);
    cout<<endl;
    cout<<"insertion sort"<<endl;
    isort(arr,n);
    
    cout<<"selection sort"<<endl;
    selectionsort(arr,n);
    cout<<endl;
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}