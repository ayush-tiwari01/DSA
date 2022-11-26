#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of both array");
    scanf("%d",&n,&m);
    
    int a[50];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[50];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    //logic
    int i=0,j=0;
    while(i<m&&j<n){
        if(a[i]<b[j]){
            // printf("%d",a[i++]);
            i++;
        }
        else if(a[i]>b[j]){
           // printf("%d",b[j++]);
           j++;
        }
        else{
            printf("%d ",a[i++]);
            j++;
        }
    }
    // while(i<n){
    //     //  printf("%d",a[i++]);
    //     i+
    // }
    // while(j<m){
    //      printf("%d",b[j++]);
    // }
}