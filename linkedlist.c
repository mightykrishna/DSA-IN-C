# include<stdio.h>
# include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
void linkedlist(struct Node *ptr){
    while(ptr!=NULL){
        printf("element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=6;
    head->next=second;

    second->data=7;
    second->next=third;

    third->data=8;
    third->next=NULL;
    linkedlist(head);

    
    
    return 0;
}