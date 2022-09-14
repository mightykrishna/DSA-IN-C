# include<stdio.h>
# include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
void linkedlist(struct Node *ptr){
    while(ptr!=NULL){
        printf("element : %d \n",ptr->data);
        ptr=ptr->next;
    }
    printf("\n\n\n");
    
    while(ptr->prev!=NULL){
        printf("element : %d \n",ptr->data);
        ptr=ptr->prev;

    }
}
int main(){
    struct Node * N1;
    struct Node * N2;
    struct Node * N3;
    

    N1=(struct Node *)malloc(sizeof(struct Node));
    N2=(struct Node *)malloc(sizeof(struct Node));
    N3=(struct Node *)malloc(sizeof(struct Node));
    
    N1->prev=NULL;
    N1->next=N2;
    N1->data=6;
    N2->data=7;
    N2->next=N3;
    N2->prev=N1;
    N3->data=8;
    N3->next=NULL;
    N3->prev=N2;
    linkedlist(N1);

    
    
    return 0;
}