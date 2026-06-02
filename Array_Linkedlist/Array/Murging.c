#include <stdio.h>
void murgearr(int a[], int b[], int s1, int s2);
int main()
{
    int max;
    int a[20], b[20];
    int s1, s2;

    printf("enter size of an array a\n");
    scanf("%d", &s1);
    printf("enter elements \n");
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter size of an array b\n");
    scanf("%d", &s2);
    printf("enter elements \n");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &b[i]);
    }
    murgearr(a,b,s1,s2);

    return 0;
}

void murgearr(int a[], int b[], int s1, int s2)
{
    int i = 0, j = 0, k = 0;
    int c[s1+s2];
    while (i < s1 && j < s2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < s1)
    {
        c[k++] = a[i++];
    }
    while (j < s2)
    {
        c[k++] = b[j++];
    }
    for (int x=0;x<(s1+s2);x++)
    {
        printf("%d \t",c[x]);
    }
}
