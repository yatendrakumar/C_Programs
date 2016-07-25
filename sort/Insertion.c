#include<stdio.h>

int main()
{
    int arr[5] = {1, 0, 4, 5, 3};
    int i = 1, j, k;
    int temp = 0;
    for ( i = 0; i < 5 ; i++)
        printf("array = %d\n", arr[i]);
    for (i = 1; i < 5; i++) {
        for (j = i-1; j >= 0; j--) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for ( i = 0; i < 5 ; i++)
        printf("array = %d\n", arr[i]);
}


