#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int* a,n;
    // printf("Enter the size of the array :\n");
    // scanf("%d",&n);
    // a = (int*)malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the %d number : \n",i);
    //     scanf("%d",&a[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nThe %d number : %d",i,a[i]);
    // }

    int *a, n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number : \n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe %d number : %d", i, a[i]);
    }

    printf("\nEnter the size of the new array :\n");
    scanf("%d", &n);
    a = (int *)realloc(a, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number : \n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe %d number : %d", i, a[i]);
    }
    free(a);
    printf("\nAfter using free function \n"); //Garbage value will get printed
    for (int i = 0; i < n; i++)
    {
        printf("\nThe %d number : %d", i, a[i]);
    }
    return 0;
}