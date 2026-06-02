#include <stdio.h>
#include <stdlib.h>
int parttition(int a[], int p, int r)
{
    int x = a[r];
    int i = p - 1;
    int temp;

    for (int j = p; j < r; j++)
    {
        if (a[j] < x)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[r];
    a[r] = temp;

    return (i + 1);
}
void Quick_sort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = parttition(a, p, r);
        Quick_sort(a, p, q - 1);
        Quick_sort(a, q + 1, r);
    }
}

int main()
{
    int N;
    printf("Enter lenth of array - ");
    scanf("%d", &N);

    int a[N];

    printf("enter elements \n");

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    Quick_sort(a, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}