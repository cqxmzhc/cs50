#include <stdio.h>

#define LENGTH 10

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int a[], int n) {
    int i;
    while (n > 0) {
        for (i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                swap(&a[i], &a[i+1]);
            }
        }

        n--;
    }
}

int
main(int argc, char const *argv[])
{
    int test_arr[LENGTH] = {44, 45, 98, 1, 0 ,9, 435, 444, 4546, 2};
    bubble_sort(test_arr, LENGTH);

    int i;
    for(i = 0; i < LENGTH; i++) {
        printf("%d\n", test_arr[i]);
    }
    return 0;
}
