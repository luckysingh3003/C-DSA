#include <stdio.h>
void merge(int a[], int l, int mid, int r)
{
        int i = l;
        int j = mid + 1;
        int k = 0;
        int size = r - l + 1;
        int b[size];

        while (i <= mid && j <= r)
        {
                if (a[i] < a[j])
                {
                        b[k] = a[i];
                        i++;
                }
                else
                {
                        b[k] = a[j];
                        j++;
                }
                k++;
        }

        if (i > mid)
        {
                while (j <= r)
                {
                        b[k] = a[j];
                        j++;
                        k++;
                }
        }

        else
        {
                while (i <= mid)
                {
                        b[k] = a[i];
                        i++;
                        k++;
                }
        }

        for (k = 0; k < size; k++)
        {
                a[k + l] = b[k];
        }
}

void mergesort(int a[], int l, int r)
{
        if (l < r)
        {
                int mid = (l + r) / 2;
                mergesort(a, l, mid);
                mergesort(a, mid + 1, r);
                merge(a, l, mid, r);
        }
}

int main()
{
        int a[] = {9, 4, 7, 6, 3, 1, 5};
        int l = 0;
        int r = 6;

        mergesort(a, l, r);

        for (int i = 0; i <= r; i++)
        {
                printf("%d ", a[i]);
        }

        return 0;
}