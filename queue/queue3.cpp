#include<iostream>
using namespace std;
#define size 10
struct queue{
    int items[size];
    int Rear;
    int Front;
};
void Initialize(struct queue *q1){
    q1->Front=0;
    q1->Rear=0;
}
int isempty(struct queue *q1){
         if(q1->Front==q1->Rear){
            return true;
         }
         else{
            return false;
         }
}
void enqueue( struct queue *q1, int x){
    if((q1->Rear+1)%size == q1->Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    q1->Rear=(q1->Rear+1) % size;
    q1->items[q1->Rear]=x;
}
int dequeue(struct queue *q1){
    int x;
    if(isempty){
        cout<<"underflow"<<endl;
        exit(1);
    }
    else{
    q1->Front=(q1->Front+1) % size;
    x=q1->items[q1->Front];
    return x;
    }
}
void display(struct queue *q1){
    for(int i=q1->Front+1;i<=q1->Rear;i++){
        cout<<q1->items[i]<<" ";
    }
    cout<<endl;
}

int main(){
    struct queue q1;
    Initialize(&q1);
    enqueue(&q1,2);
    enqueue(&q1,4);
    enqueue(&q1,6);
    enqueue(&q1,8);
    enqueue(&q1,10);
    cout<<"Display is ";
    display(&q1);

    
}