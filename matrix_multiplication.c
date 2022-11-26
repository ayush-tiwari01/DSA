#include<stdio.h>
int main(){
    printf("Ayush Tiwari 2021B0101073 CSE-A");
    printf("\n");
    int ar,ac,br,bc;
    int sum=0;
    int a[10][10],b[10][10],c[10][10];
    printf("enter the row");
    scanf("%d",&ar);
    printf("enter the column");
    scanf("%d",&ac);
    printf("enter the element of first matrix");
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
        scanf("%d",&a[i][j]);
        }
    }
    
      printf("enter the row");
    scanf("%d",&br);
    printf("enter the column");
    scanf("%d",&bc);
    if(ac != br){
        printf("we can not multiply this matrix\n");
    }
    else{
        printf("we can multiply this matrix\n");
    }
    printf("enter the element of second matrix");
     for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
        scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
            for(int k=0;k<br;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("resultant matrix is\n");
    for(int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    
   
}