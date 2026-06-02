#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for (int i=0; i<n1; i++)
    {
        L[i] = a[p+i];
    }
    for (int i=0; i<n2; i++)
    {
        M[i] = a[q + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            a[k] = L[i];
            i++;
            k++;
        }
        else
        {
            a[k] = M[j];
            j++;
            k++;
        }
    }

        while (i < n1)
        {
            a[k] = L[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = M[j];
            j++;
            k++;
        }
    
}
void merge_sort(int a[], int st, int last)
{
    if (st < last)
    {
        int mid = (st + last) / 2;
        merge_sort(a, st, mid);
        merge_sort(a, mid + 1, last);
        merge(a, st, mid, last);
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
        scanf("%d", &a[i]);
    merge_sort(a, 0, N - 1);
    printf("sorted array - ");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}