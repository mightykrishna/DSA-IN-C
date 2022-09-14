#include<stdio.h>
 
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
 
void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}
 
int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int n;
    int A[n] ;
    
    printf("enter the elements in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the %d elements of array \n",i+1);
        scanf("%d",&A[i]);
    }
    // int A[] = {1, 2, 3, 4, 5, 6};
    
    printArray(A, n); // Printing the array before sorting
    bubbleSort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting
    return 0;
}
