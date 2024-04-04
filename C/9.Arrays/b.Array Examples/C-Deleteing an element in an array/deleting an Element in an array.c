#include <stdio.h>
#define MAX_SIZE 100

int main(){

    int arr[MAX_SIZE];
    int i, size, pos;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");

    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    /* Invalid delete position */
    if(pos < 0 || pos > size){
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        /* Copy next element value to current element */
        for(i = pos-1; i < size-1; i++){
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i = 0; i < size; i++){
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}