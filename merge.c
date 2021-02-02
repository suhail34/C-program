#include <stdio.h>
int main()
{
    int n1, arr1[10], arr2[10], arr3[20], m, index,n2,temp;
    printf("Enter the size of the first array :");
    scanf("%d", &n1);
    printf("\nEnter the element of first array in ascending order : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of the second array :");
    scanf("%d", &n2);
    printf("\nEnter the element of second array in ascending order : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    m = n1 + n2;
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
        index = i;
    }
    index++;
    for (int i = index; i < m; i++)
    {
        arr3[i] = arr2[i - index];
    }
    for (int i = 0; i < m; i++)
    {   
        for(int j = 0 ; j < m-i ; j++)
        {
            if(arr3[i]<arr3[j])
            {   
                temp = arr3[j] ;
                arr3[i] = arr3[j] ;
                arr3[i] = temp ;
            }
        }
        printf("\nThe merged array %d is : %d",i,arr3[i]);
    }

    return 0;
}