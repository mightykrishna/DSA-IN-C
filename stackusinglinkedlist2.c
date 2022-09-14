#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node * top=NULL;
int isfull(struct Node * top){
    struct Node * p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("stack is full\n");
        return 1;
    }
    else{
       
        return 0;
    }
}
int isempty(struct Node * top){
    if(top==NULL){
        
        return 1;
    }
    else{
        
        return 0;
    }
}
struct Node* push(struct Node * top,int x){
    
    if(isfull(top)){
        printf("stackoverflow\n");

    }
    else{
        struct Node * s=(struct Node*)malloc(sizeof(struct Node));
        s->data=x;
        s->next=top;
        top=s;
        return top;

        
    }

}
void linkedlist(struct Node *ptr){
    while(ptr!=NULL){
        printf("element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int pop(struct Node * tp){
    if (isempty(tp)){
        printf("stackunderflow\n");
    }
    else{
        struct Node * n=tp;
        top=tp->next;
        int x=n->data;
        free(n);
        return x; 
    }
}
int stacktop(){
    return top->data;
}
int peek(int pos){
    
    struct Node* ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{

        return -1;
    }
}
int main(){
    
    top=push(top,56);
    top=push(top,43);
    top=push(top,9);
    top=push(top,12);

    linkedlist(top);
    int t=pop(top);
    printf("the deleted element is %d\n",t);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
    linkedlist(top);




    return 0;
}