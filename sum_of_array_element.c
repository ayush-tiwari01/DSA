#include<stdio.h>
int sum(int a[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return a[0];
    }
    int suma =a[0]+sum(a+1, n-1);
    
}
int main(){
    int n;
    int a[n];
    printf("enter the size ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    int y;
    y=sum(a,n);
    printf("%d",y);
    
}