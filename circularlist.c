# include<stdio.h>
# include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
void linkedlist(struct Node *head){
    struct Node * ptr=head;
    do{ 
        
        printf("element is  %d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node * insertatfirst(struct Node *head,int data){
    struct Node * ptr=(struct Node *)malloc(sizeof (struct Node));
    
    ptr->data= data;
    struct Node * p=head->next;
    while(p->next!=head){
        
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));


    head->data=6;
    head->next=second;

    second->data=7;
    second->next=third;

    third->data=8;
    third->next=fourth;

    
    fourth->data=9;
    fourth->next=head;
    linkedlist(head);
    head=insertatfirst(head,76);

    printf("\n\n\n");
    linkedlist(head);

    
    
    return 0;
}