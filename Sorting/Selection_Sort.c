#include <stdio.h>
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
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
    selection_sort(a, N);
    printf("shorted array :- ");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}