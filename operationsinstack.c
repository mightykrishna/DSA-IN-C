#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("stackisempty\n");
    }
    else{
        printf("notempty\n");
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("stackoverflow\n");
    }
    else{
        printf("stack not overflow\n");
    }
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
int pop(struct stack *p)
{
    if (isempty(p))
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        int val = p->arr[p->top];
        p->top--;
        printf("pop done\n");
        return val;
    }
}
int peek(struct stack *s, int i)
{
    int arrayind = s->top - i + 1;
    if (arrayind < 0)
    {
        printf("not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return s->arr[arrayind];
    }
}
int main()
{

    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size = 30;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // s->arr[0]=7;
    // s->top++;

    if (isempty(s))
    {
        printf("the stack is empty \n");
    }
    else
    {
        printf("the stack is not empty\n");
    }
    printf("before push and pop %d  \n", isfull(s));
    printf("before push and pop %d  \n", isempty(s));
    push(s, 76);
    push(s, 56);
    push(s, 32);
    push(s, 43);
    push(s, 87);
    push(s, 56);
    push(s, 45);

    printf("after push  %d   \n", isfull(s));
    printf("after push  %d   \n", isempty(s));
    printf("the popped element is %d \n",pop(s));
    printf("the popped element is %d \n",pop(s));
    printf("the popped element is %d \n",pop(s));
    printf("the popped element is %d \n",pop(s));
    printf("\n\n");
    for (int j=1;j<=s->top+1;j++){
        printf("the valur at posn %d is %d\n",j,peek(s,j));
    }
    return 0;
}