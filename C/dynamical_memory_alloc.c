#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the size of the memory:");
    scanf("%d",&n);
    // ptr = (int *)malloc(n*sizeof(int));
    ptr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<=n;i++){
        printf("Enter the value of the array: ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<=n;i++){
        printf("The entered value of the array: %d\n",ptr[i]);
    }
    printf("Enter the size of the memory:");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for(int i=0;i<=n;i++){
        printf("Enter the value of the array: ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<=n;i++){
        printf("The entered value of the array: %d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}