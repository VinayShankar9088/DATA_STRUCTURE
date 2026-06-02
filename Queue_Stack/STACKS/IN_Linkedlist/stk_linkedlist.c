// // push , pop , peek , display Operations of stack in "Linkedlist" impementation.
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// } *temp, *top = NULL;

// void push()
// {
//     int x;
//     printf("Enter element to pust in stack - ");
//     scanf("%d",&x);
//     struct node *new = (struct node *)malloc(sizeof(struct node));
//     if (new == NULL)
//     {
//         printf("Heap Overflow! (memory full)!");
//     }
//     else
//     {
//         new->data = x;
//         new->next = top;
//         top = new;
//     }
// }

// void pop()
// {
//     if (top == NULL)
//         printf("stack is Empty_!");
//     else
//     {
//         struct node *del = top;
//         printf("%d is poped out!", del->data);
//         top = top->next;
//         free(del);
//     }
// }

// void peek()
// {
//     if (top == NULL)
//         printf("stack is Empty_!");
//     else
//     {
//         printf("%d is on the top of the stack ", top->data);
//     }
// }

// void display()
// {
//     if (top == NULL)
//         printf("stack is Empty_!");
//     else
//     {
//         while (top != NULL)
//         {
//             printf("%d\t", top->data);
//             top = top->next;
//         }
//     }
// }

// int main()
// {
//     int ch;
//     do
//     {
//         printf("\n Enter choice \n\n 1 : Push \n 2 : pop \n 3 : peek \n 4 : Display...  \n\t0 : EXIT!");
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

//     return 0;
// }

