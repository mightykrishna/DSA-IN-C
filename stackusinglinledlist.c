#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

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
struct Node * pop(struct Node ** top){
    if (isempty(*top)){
        printf("stackunderflow\n");
    }
    else{
        struct Node * n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x; 
    }
}
int main(){
    struct Node * top=NULL;
    top=push(top,56);
    top=push(top,43);
    top=push(top,9);
    top=push(top,12);

    linkedlist(top);
    int s=pop(&top);
    printf("the deleted element is %d",s);
    linkedlist(top);




    return 0;
}