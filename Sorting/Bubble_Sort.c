#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }
}
int main()
{
    int N;
    printf("enter number of elements of an array- \n");
    scanf("%d", &N);
    int a[N];
    printf("Enter elements \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, N);
    printf("shorted array :- ");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}