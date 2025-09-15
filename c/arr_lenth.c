#include  <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array: %d\n", length);
    printf("Size of the array in bytes: %lu\n", sizeof(arr));
    printf("Size of one element in bytes: %lu\n", sizeof(arr[0]));
    return 0;
}