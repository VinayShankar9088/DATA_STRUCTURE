// // push , pop , peek , display Operations of stack in "Array" impementation.
// #include <stdio.h>
// #define N 5
// int stack[N];
// int top = -1;
// void Push()
// {
//     int x;
//     printf("enter data ");
//     scanf("%d", &x);
//     if (top == N - 1)
//     {
//         printf("Overflow");
//     }
//     else
//     {
//         top++;
//         stack[top] = x;
//     }
// }
//
// void pop()
// {
//     int del;
//     if (top == -1)
//     {
//         printf("stack is Empty! ");
//     }
//     else
//     {
//         del = top;
//         printf("%d is poped out", stack[del]);
//         top--;
//     }
// }
//
// void peek()
// {
//     if (top == -1)
//     {
//         printf("stack is Empty! ");
//     }
//     else
//     {
//         printf("%d is on top of stack! ", stack[top]);
//     }
// }
//
// void display()
// {
//     if (top == -1)
//     {
//         printf("stack is Empty! ");
//     }
//     else{
//         for(int i = top;i>-1;i--){
//             printf("%d\n",stack[i]);
//         }
//     }
// }
//
//
// int main()
// {
//     int ch;
//     do
//     {
//         printf("\n Enter choice \t 1 : Push \t 2 : pop \t 3 : peek \t 4 : Display...  0 : EXIT!");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             Push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             peek();
//             break;
//         case 4:
//             display();
//             break;
//         case 0:
//             printf("END OF PROGRAM !");
//             break;
//         default:
//             printf("Enter valid choice ");
//             break;
//         }
//     } while (ch != 0);
//
//     return 0;
// }

// program to reverse a string...
//
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int top = -1;
// char stack[20];
//
// void push(char item){
//     if(top == 19){
//         printf("NO SPACE : stack full! \n it should less then or equal to 20 ch.. long.");
//         return;
//     }
//     else{
//         stack[++top] = item;
//     }
// }
//
// char pop(){
//     if(top == -1){
//         printf("ERROR: string is empty !    try again...");
//         return '\0';
//     }
//
//     return stack[top--];
//
// }
//
// int main(){
//    
//     char str[20];
//     printf("enter string - ");
//     gets(str);
//    
//     for(int i=0; i<strlen(str); i++)
//     push(str[i]);
//
//     for(int i=0; i<strlen(str); i++){
//         str[i] = pop();
//     }
//
//     puts(str);
//
//     return 0;
// }

// A recursive program of TOWER OF HANOI.... ***also count no. of moves.***
//
// #include <stdio.h>
// int move = 0;
//
// void TOH(int disk, char from, char aux, char to)
// {
//     if (disk == 1)
//     {
//         printf("Move disk 1 from rod %c to rod %c\n", from, to);
//         move++;
//         return;
//     }
//
//     TOH(disk - 1, from, to, aux);
//     printf("move disk %d from rod %c to rod %c\n", disk, from, to);
//     move++;
//     TOH(disk - 1, aux, from, to);
// }
//
// int main(){
//     int n;
//     printf("enter total no. of disks :- ");
//     scanf("%d",&n);
//     TOH(n,'A','B','C');
//     printf("TASK COMPLEATED with total %d moves of disks",move);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
char str[N];
int top = -1;

void push(char data)
{
    if (top == N - 1)
    {
        printf("stack overflow.");
        return;
    }
    str[++top] = data;
}

char pop()
{
    char data;
    if (top == -1)
    {
        printf("stack Underflow.");
        exit(1);
    }
    data = str[top];
    top--;
    return data;
}

int is_match(char ch1, char ch2)
{
    if (ch1 == '(' && ch2 == ')')
    {
        return 1;
    }
    else if (ch1 == '{' && ch2 == '}')
    {
        return 1;
    }
    else if (ch1 == '[' && ch2 == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isBalenced(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (top == -1)
            {
                return 0;
            }
            else if (!is_match(pop(), s[i]))
            {
                return 0;
            }
        }
    }
    if (top == -1)
        return 1;
    else
        return 0;
}
int main()
{
    char s[N];
    printf("enter expresion : ");
    scanf("%s", s);
    if (isBalenced(s))
    {
        printf("Balenced!");
    }
    else
    {
        printf("not Balenced");
    }
    return 0;
}