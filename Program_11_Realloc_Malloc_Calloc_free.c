/*#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc() to allocate memory for an array of integers
    int *arr1 = (int *)malloc(5 * sizeof(int));
    printf("Using malloc(): Allocated memory for 5 integers\n");

    // Initializing and printing values
    for (int i = 0; i < 5; i++) {
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    // Using calloc() to allocate memory for an array of 3 floats
    float *arr2 = (float *)calloc(3, sizeof(float));
    printf("Using calloc(): Allocated memory for 3 floats\n");

    // Initializing and printing values
    for (int i = 0; i < 3; i++) {
        arr2[i] = (i + 1) * 1.1;
        printf("%.2f ", arr2[i]);
    }
    printf("\n\n");

    // Using realloc() to resize the first array to hold 8 integers
    arr1 = (int *)realloc(arr1, 8 * sizeof(int));
    printf("Using realloc(): Resized memory for 8 integers\n");

    // Initializing and printing values after resizing
    for (int i = 5; i < 8; i++) {
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    // Freeing allocated memory
    free(arr1);
    free(arr2);
    printf("Memory freed using free()\n");

    return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr1=(int *)malloc(n*sizeof(int) );
    int *arr2=(int*)calloc(n,sizeof(int));
    if(arr1==NULL||arr2==NULL)
    {
        printf("Memory Error!\n");
    }
    else{
        for(int i=0;i<n;i++)
        {
            *(arr1+i)=i;
        }
        for(int i=0;i<n;i++)
        {
            *(arr2+i)=n-i;
        }
    }
    int*arr3=(int*)realloc(arr1,(n/2)*sizeof(int));
    int*arr4=(int*)realloc(arr2,(2*n)*sizeof(int));
    if(arr3==NULL||arr4==NULL){
        printf("Reallocation failed !\n");

    }
    else{
        for(int i=0;i<n;i++){
            printf("%d",*(arr3+i));
            printf("\n");
            for(int i=0;i<2*n;i++){
                printf("%d",*(arr4+i));
            }
        }
    free(arr1);
    free(arr2);
    free(arr3);
    free(arr4);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *arr1=(int *)malloc(n*sizeof(int) );
    int *arr2=(int*)calloc(n,sizeof(int));
    if(arr1==NULL||arr2==NULL)
    {
        printf("Memory Error!\n");
    }
    else{
        for(int i=0;i<n;i++)
        {
            arr1[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            arr2[i]=n-i;
        }
    }
    int*arr3=(int*)realloc(arr1,(n/2)*sizeof(int));
    int*arr4=(int*)realloc(arr2,(2*n)*sizeof(int));
    if(arr3==NULL||arr4==NULL){
        printf("Reallocation failed !\n");
    }
    else{
        for(int i=0;i<n/2;i++){
            printf("%d ",arr3[i]);
        }
        printf("\n");
        for(int i=0;i<2*n;i++){
            printf("%d ",arr4[i]);
        }
        printf("\n");
    }
    free(arr1);
    free(arr2);
    free(arr3);
    free(arr4);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));

    if(arr1 == NULL || arr2 == NULL)
    {
        printf("Memory Error!\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        arr1[i] = i;
    }

    for(int i = 0; i < n; i++)
    {
        arr2[i] = n - i;
    }

    int *arr3 = (int *)realloc(arr1, (n / 2) * sizeof(int));
    int *arr4 = (int *)realloc(arr2, (2 * n) * sizeof(int));

    if(arr3 == NULL || arr4 == NULL)
    {
        printf("Reallocation failed!\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    printf("Elements of first resized array: \n");
    for(int i = 0; i < n / 2; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\nElements of second resized array: \n");
    for(int i = 0; i < 2 * n; i++)
    {
        if(i < n)
        {
            printf("%d ", arr4[i]);
        }
        else
        {
            printf("0 ");
        }
    }

    printf("\n");

    free(arr3);
    free(arr4);

    return 0;
}