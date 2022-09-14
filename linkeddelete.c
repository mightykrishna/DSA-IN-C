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
struct Node * deleteatfirst(struct Node * head){
    
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node * deleteatindex(struct Node * head,int index){
    
    struct Node * p=head;
    struct Node* q=head->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
           
        }
   
    p->next=q->next;
    free(q);
    return head;
    
}
struct Node * deleteatend(struct Node *head){
    
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL);{
        p=p->next;
        q=q->next;
        
    }
    p->next=NULL;
    free(q);
   
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
    fourth->next=NULL;
    linkedlist(head);
    head=deleteatend(head);
    printf("\n");
    linkedlist(head);
    return 0;
}