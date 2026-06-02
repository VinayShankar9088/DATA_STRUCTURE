#include <stdio.h>
void insertion_sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int N;
    printf("Enter no. of elements ");
    scanf("%d", &N);
    int a[N];
    printf("Enter elements \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    insertion_sort(a, N);
    printf("shorted array :- ");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}