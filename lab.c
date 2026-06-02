#include <stdio.h>
int main()
{
    int a[20], i, key, t = -1, beg, end, mid, len;
    printf("Enter the length of array a (out of 20): ");
    scanf("%d", &len);
    printf("Enter elements of the array in sorted form:");
    for(i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    beg = 0;
    end = len - 1;
    while(beg <= end) {
        mid = (beg + end) / 2;
        if(a[mid] == key) {
            t = mid;
            break;
        }
        else if(a[mid] > key) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }
    if(t != -1) {
        printf("Item found!");
    } else {
        printf("Item not found");
    }
    return 0;
}
