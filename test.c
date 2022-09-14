#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9};
    char *arr1[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    
  	// Complete the code.
    
    for( n=a;n<=b;n++){
        if(n>=1 && n<=9){
            for(int i=n;n<=9;i++){
                printf("%s\n",arr1[i-1]);
            }
        }
        else if(n>9){
        printf("Greater than 9");
        }
    }
        
    return 0;
}