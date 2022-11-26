#include<stdio.h>
int main(){
    int ar,ac,br,bc;
    int a[10][10],b[10][10],c[10][10];
    printf("enter the row and column:");
    scanf("%d%d",&ar,&ac);
    printf("enter the element of first matrix");
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //   printf("enter the row and column:");
    // scanf("%d%d",&br,&bc);
    // printf("enter the element of second matrix");
    // for(int i=0;i<br;i++){
    //     for(int j=0;j<bc;j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            c[i][j]=a[j][i];
        }
    }
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}