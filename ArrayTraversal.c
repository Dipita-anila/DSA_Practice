#include<stdio.h>

int main(){
int arr[10], size;
printf("Enter the size of the array: ");
scanf("%d", &size);
printf("Enter the elements of the array: \n");
for(int i = 0; i <size; i++){
    scanf("%d", &arr[i]);
}
printf("The Elements of the arrar are: ");
for(int i = 0; i<size; i++){
    printf("%d", arr[i]);
    printf("\t");
}
return 0;
}
