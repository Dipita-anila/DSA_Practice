#include<stdio.h>

int main()
{
    //time complexity O(1)
    void OptimizedInsertionForUnsortedArray(int arr[], int size)
    {
        int num, pos;
        printf("\nEnter the position:");
        scanf("%d", &pos);
        printf("Enter the number:");
        scanf("%d", &num);
        if( pos< 0 || pos > size)
        {
            printf("Invalid Position");
        }
        else
        {
            arr[size] = arr[pos-1];
            arr[pos-1] = num;
        }

    }

    //time compplexity for average case O(n)
    void insertionForSortedArray(int arr[], int size)
    {
        int num, pos;
        printf("\nEnter the position:");
        scanf("%d", &pos);
        printf("Enter the number:");
        scanf("%d", &num);
        if( pos < 0 || pos > size)
        {
            printf("Invalid Position\n");
        }
        else
        {
            for(int i = size-1; i >= pos-1; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[pos-1] = num;
        }
    }

    //time complexity O(1)
    int insertAtLastIndex(int arr[], int size)
    {
        int num;
        printf("\nEnter the number:");
        scanf("%d", &num);
        arr[size]= num;
        size++;
        return size;
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
    OptimizedInsertionForUnsortedArray(arr, size);
    size ++;
    insertionForSortedArray(arr, size);
    size++;
    insertAtLastIndex(arr, size);
    size++;
    printf("The Elements of the array after insertion are: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d", arr[i]);
        printf("\t");
    }


}
