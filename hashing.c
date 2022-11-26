#include<stdio.h>
int main(){
     int n;
    
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("this is the array element\n");
     for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    //insertion sorting start
    for(int i=1;i<n;i++){
        int t=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>t){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }

    return 0;

}