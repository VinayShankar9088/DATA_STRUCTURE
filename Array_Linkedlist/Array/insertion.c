//   INSERTION OF AN ARRAY ELEMENT
#include<stdio.h>
int main(){
    int max;
    int a[20];
    int s;
    int p;
    printf("enter size of an array\n");
    scanf("%d",&s);
    printf("enter elements \n");
    for(int i=0; i<s;i++){
        scanf("%d",&a[i]);
    }
    int b;
    printf("enter element you want to insert \n");
    scanf("%d",&b);
    printf("enter position ");
    scanf("%d",&p);
    if(p<=s && p>=0){
        for(int i=s-1; i>=(p-1);i--){
            a[i+1] = a[i];
        }
        a[p-1] = b;
    }
    else{
        a[p-1] = b;
    }

    for(int j=0; j<=s; j++){
        printf("j%d. %d \n",j,a[j]);
    }

    return 0;
}

// DELETION OF AN ARRAY ELEMENTS
