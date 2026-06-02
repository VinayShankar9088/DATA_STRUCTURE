// #include <stdio.h>
// #define N 5
// int stk[N];
// int top = -1;

// // Push function.
// void push()
// {
//     int itm;
//     printf("Enter element to Push in stack. ");
//     scanf("%d", &itm);
//     if (top == N - 1)
//     {
//         printf("stack is overflow!");
//     }
//     else
//     {
//         top++;
//         stk[top] = itm;
//     }
// }

// // Pop function.
// void pop()
// {
//     if (top == -1)
//     {
//         printf("stack is empty!..");
//     }
//     else
//     {
//         int poped = stk[top];
//         top--;
//         printf("%d is poped out", poped);
//     }
// }

// // Peak function.
// void peak()
// {
//     if (top == -1)
//     {
//         printf("stack is empty.");
//     }
//     else
//     {
//         printf("%d is on the top of the stack.", stk[top]);
//     }
// }

// // function to Display the elements!
// void display()
// {
//     if (top == -1)
//     {
//         printf("stack is empty!");
//     }
//     for (int i = top; i >= 0; i--)
//     {
//         printf("%d,\t", stk[i]);
//     }
// }

// int main(){
//     int ch;
//     do
//     {

//         printf("Enter coice: \n1:Push\n2:Pop\n3:Peak\n4:Display\n\t0:Exit!");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             peak();
//             break;
//         case 4:
//             display();
//             break;
//         case 0:
//             break;

//         default:
//             printf("Invalid Input!");
//             break;
//         }
//     } while (ch != 0);
// }

// Linked List....

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push()
{
    int item;
    printf("enter element you wnat to push in a stack- ");
    scanf("%d",&item);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Heap Overflow\n");
        return;
    }
    new->data = item;
    new->next = top;
    top = new;
    printf("%d is Pushed onto the stack.",top->data);
    // printf(top);
}

void pop(){
    if(top == NULL){
        printf("stack is already empty!");
    }
    else{
        int del;
        del = top->data;
        top = top->next;
        printf("%d is poped out! \n",del);               
    }
}

void display(){
    struct node* temp = top;
    while(temp!= NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void peak(){
    if(top == NULL){
        printf("stack is empty!");
    }
    else{
        printf("%d is no the top of the stack\n",top->data);
    }
}

int main(){
    int ch;
    do
    {

        printf("Enter coice: \n1:Push\n2:Pop\n3:Peak\n4:Display\n\t0:Exit!");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        case 0:
            break;

        default:
            printf("Invalid Input!");
            break;
        }
    } while (ch != 0);
}