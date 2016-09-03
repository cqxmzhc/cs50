#include <stdio.h>

#define LENGTH 20

void merge_array(int a[], int first, int mid, int end, int tmp[]) {
    int i, j, k;
    i = k = first, j = mid + 1;

    while (i <= mid && j <= end) {
        if (a[i] < a[j])
            tmp[k++] = a[i++];
        else
            tmp[k++] = a[j++];
    }

    while (i <= mid)
        tmp[k++]= a[i++];

    while (j <= end)
        tmp[k++] = a[j++];

    for(first; first <= end; first++) {
        a[first] = tmp[first];
    }
}

void merge_sort(int a[], int start, int end, int tmp[]) {
    if (start < end) {
        int mid = (start + end) / 2;
        //sort left
        merge_sort(a, start, mid, tmp);
        //sort right
        merge_sort(a, mid + 1, end, tmp);
        //merge
        merge_array(a, start, mid, end, tmp);
    }
}

int
main(int argc, char const *argv[])
{
    int a[LENGTH] = {111, 345, 89, 899, 56789, 34354, 9, 0, 10, 1, 1, 4, 99, 10, 55, 100000, 4, 55, 678, 908938};
    int tmp[LENGTH];

    merge_sort(a, 0, LENGTH - 1, tmp);

    int i;
    for (i = 0; i < LENGTH; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
