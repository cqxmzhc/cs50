#include <stdio.h>

#define LENGTH 10

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int a[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

int
main(int argc, char const *argv[])
{
    int test_arr[LENGTH] = {44, 55, 2, 89, 0, 9090, 33, 1345, 4556, 22};
    selection_sort(test_arr, LENGTH);

    int i;
    for(i = 0; i < LENGTH; i++) {
        printf("%d\n", test_arr[i]);
    }
}
