#include<stdio.h>

int main()
{
    int arr[50], size, i, j, temp;
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter %d array elements: ", size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("\nReverse of the Array is:\n");
    for(i=0; i<size; i++)
        printf("%d ",arr[i]);
    getch();
    return 0;
}
