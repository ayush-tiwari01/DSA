#include<stdio.h>
#define TABLE_SIZE 10
int main()
{

 int key,index,i,flag=0,hkey,h[20],stop;
 for(i=0;i<TABLE_SIZE;i++)
 {
    h[i]=0;
 }
 do{
 printf("enter a value to insert into hash table");
 scanf("%d\n",&key);
 printf("want to stop enter 0 else1:\n");
 scanf("%d",&stop);
 
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {

     index=(hkey+i)%TABLE_SIZE;

     if(h[index] == 0)
     {
        h[index]=key;
         break;
     }

    }

    if(i == TABLE_SIZE)
    {
        printf("\nelement cannot be inserted\n");
    }
 }while(stop==1);
    

  printf("\nelements in the hash table are \n");

  for(i=0;i< TABLE_SIZE; i++)

  printf("\nat index %d \t value =  %d",i,h[i]);
}