#include <stdio.h>
int main()
{
        int arr[] = {9, 2, 10, 5, 3};
        int n = 5;
        for (int i = 0; i < n - 1; i++)
        {
                int min = i;
                for (int j = i + 1; j < n; j++)
                {
                        if (arr[j] < arr[min])
                                min = j;
                }

                if (min != i)
                {
                        int temp = arr[min];
                        arr[min] = arr[i];
                        arr[i] = temp;
                }
        }

        for (int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }
        return 0;
}
