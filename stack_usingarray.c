#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;


};
int isempty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{ 
        return 0;
        }
}
int stacktop(struct stack * s){
    return s->arr[s->top];
}
int stackbottom(struct stack * s){
    return s->arr[0];
}
void push(struct stack *p, int val)
{
    if (isfull(p))
    {
        printf("stack is overflow cannot pushed %d \n",val);
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
        
    }
}
int isfull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){

    struct stack * s=(struct stack *)malloc(sizeof(struct stack));
    s->size=40;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    
    //s->arr[0]=7;
    //s->top++;
    
    
    push(s,76);
    push(s,56);
    push(s,43);
    push(s,45);
    push(s,23);
    push(s,70);
    printf("the top most element is %d\n",stacktop(s));
    printf("the bottom most element is %d\n",stackbottom(s));
    if(isempty(s)){
        printf("the stack is empty \n");
    }
    else{
        printf("the stack is not empty");
    }
    return 0;
}