#include <stdio.h>

int main() {
    int arr[] = {2,35,7,21,5};
    int i, j, temp;


    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4-i; j++) {
            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("Sorted array: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
