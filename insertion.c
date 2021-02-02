#include <stdio.h>
#include <string.h>

int main()
{
    int n, arr[10], pos, elem;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\nEnter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the new element : ");
    scanf("%d", &pos);
    for (int i = n + 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    printf("Enter the element you would like to insert at the position  %d : ", pos);
    scanf("%d", &elem);
    arr[pos] = elem;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}