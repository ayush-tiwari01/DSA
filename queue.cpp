#include<iostream>
using namespace std;
struct queue{
    int a[10];
    int front;
    int rear;
}*q;
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void create(struct queue*q){
    q->r=0;
    q->f=0;

}
void insertion(queue,n,front,rear){

}
int main(){
    q=(struct queue*)malloc(sizeof(queue));
    create(q);
}