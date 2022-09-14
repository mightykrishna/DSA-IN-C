# include<stdio.h>
void delete(int arr[],int size,int limit,int index){
    int i;
    if(size>=limit){
        return -1;
    }
    for(i=index;i<size - 1;i++){
        arr[i]=arr[i+1];
    }
    
    return 1;



}
int main(){
    int arr[100],size,element,index;
    printf("enter the size of array");
    scanf("%d",&size);
   
    printf("enter the index of element");
    scanf("%d",&index);
    for(int i=0;i<size;i++){
            printf("enter the array   \n");

            scanf("%d",&arr[i]);

    }
    delete(arr,size,100,index);
    size-=1;
    printf(" the new array is\n");

    for(int i=0;i<size;i++){
        
         printf("%d\n",arr[i]);
           

    }
    
   

    return 0;
}