#include<stdio.h>

int main()
{
    //Time complexity : O(n)
    void deletionInSortedArray(int arr[], int size)
    {
        int pos;
        printf("\nEnter the position:");
        scanf("%d", &pos);
        if(pos <= 0 || pos > size)
        {
            printf("Invalid Position\n");
        }
        else
        {
            for(int i = pos-1; i< (size-1); i++)
            {
                arr[i] = arr[i+1];
            }
        }
    }

    //Time complexity : O(1)
    void deletionInUnsortedArray(int arr[], int size)
    {
        int pos;
        printf("\nEnter the position:");
        scanf("%d", &pos);
        if(pos <= 0 || pos > size)
        {
            printf("Invalid Position\n");
        }
        else
        {
            arr[pos-1]= arr[size-1];
        }
    }

    int arr[10], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: \n");
    for(int i = 0; i <size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Elements of the array are: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d", arr[i]);
        printf("\t");
    }
    deletionInSortedArray(arr, size);
    size --;
    deletionInUnsortedArray(arr, size);
    size --;
    printf("The Elements of the array after deletion is: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        printf("\t");
    }
}
