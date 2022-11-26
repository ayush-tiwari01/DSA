#include<stdio.h>
int main(){
    int n,min;
    printf("enter the size");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min =a[0];
    for(int i=0;i<n;i++){
        
        if(min>a[i]){
            min=a[i];
        }
    }
    int max =a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Minimum number in the array is %d\n",min);
    printf("Maximum number in the array is %d\n",max);
    int repeat;
    int cnt=0;
    for(int i=0;i<n;i++){
        repeat=a[i];
        for(int j=0;j<n;j++){
            if(repeat==a[j])
            cnt++;
        }
    }
    if(cnt>=2){
        printf("Number  %d is repeated",repeat);
    }
}