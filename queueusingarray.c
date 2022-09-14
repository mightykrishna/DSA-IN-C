#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int *arr;
    int f;
    int r;
};

int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct queue*q,int val){
    if(isfull(q)){
        printf("the queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqued element : %d\n",val);

    }
}

int dequeue(struct queue*q){
    int a=-1;
    if(isempty(q)){
        printf("the queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
    if(isempty(&q)){
        printf("Queue is empty\n");
    }
    if(isfull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}