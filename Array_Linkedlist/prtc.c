// // #include<stdio.h>
// // #include<stdlib.h>
// // #define n 20
// // int top = -1;
// // int stack[n];

// // void push(){
// // if(top == n-1){
// //     printf("\nStack Overflow!");
// // }
// // else{
// //     int value;
// //     printf("\nenter element to push : ");
// //     scanf("%d",&value);
// //     top = top+1;
// //     stack[top] = value;
// //     printf("\nElement is inserted successfully!\n");
// // }
// // }

// // void pop(){
// // if(top == -1){
// //     printf("\nStack Underflow!");
// // }
// // else{
// //     int item = stack[top];
// //     top = top-1;
// //     printf("\nPopped Element : %d\n",item);
// // }
// // }

// // void peek(){
// // if(top == -1){
// //     printf("\nStack is Empty!");
// // }
// // else{
// //     printf("\ntop element : %d\n",stack[top]);
// // }
// // }

// // int isEmpty(){
// //   return (top == -1);
// // }

// // int isFull(){
// //     return (top == n-1);
// // }

// // void display(){
// //     if(top == -1)
// //        printf("\nStack is Empty!");
// //     else{
// //         printf("\nStack elements : \n");
// //         for(int i=top;i>=0;i--){
// //             printf("%d\n",stack[i]);
// //         }
// //     }
// // }

// // int main(){
// //     int ch;
// //     while (1){
// //         printf("\n1. Pop\n2. Push\n3. Peek\n4. isEmpty\n5. isFull\n6. display\n7. exit\n");
// //         printf("\nenter your choice : ");
// //         scanf("%d",&ch);
// //         switch (ch){
// //             case 1 :
// //                     pop();
// //                     break;
// //             case 2 : 
// //                     push();
// //                     break;
// //             case 3 : 
// //                     peek();
// //                     break;
// //             case 4 : 
// //                     if (isEmpty()){
// //                         printf("Stack is Empty!");
// //                     }
// //                     else{
// //                         printf("Stack is not Empty!");
// //                     }
// //                     break;
// //             case 5 :
// //                     if (isFull()){
// //                         printf("Stack is full!");
// //                     }
// //                     else{
// //                         printf("Stack is not full!");
// //                     }
// //                     break;
// //             case 6 :
// //                     display();
// //                     break;
// //             case 7 :
// //                     printf("Exiting...");
// //                     exit(0);
// //             default:
// //                     printf("\nInvalid Choice!");
// //         }
// //     }
// //     return 0;
// // }


// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* next;
// };

// struct node *top = NULL;

// void push(int value){
//     struct node *n = (struct node*)malloc(sizeof(struct node));
//     if(n == NULL){
//         printf("Heap Overflow!\n");
//         return;
//     }
//     n->data = value;
//     n->next = top;
//     top = n;
// }

// int pop(){
//     if(top==NULL){
//         printf("Stack Underflow!\n");
//         return -1;
//     }
//     else{
//         struct node *del = top;
//         int item = del->data;
//         top = top->next;
//         free(del);
//         printf("\nPopped item = %d",item);
//         return item;
//     }
// }

// int peek(){
//     if(top==NULL){
//         printf("Stack Underflow!\n");
//         return -1;
//     }
//     else{
//         return top->data;
//     }
// }

// int isEmpty(){
//     return (top == NULL);
// }

// void display(){
//     struct node *temp = top;
//     while(temp!=NULL){
//         printf("\n%d",temp->data);
//         temp = temp->next;
//     }
// }

// int main(){
//     int ch,i,item;
//     while (1){
//         printf("\n1. Pop\n2. Push\n3. Peek\n4. isEmpty\n5. display\n6. exit\n");
//         printf("\nenter your choice : ");
//         scanf("%d",&ch);
//         switch (ch){
//             case 1 :
//                     {
//                     item = pop();
//                     break;
//                     }
//             case 2 : 
//                     {
//                     printf("\nenter element to push : ");
//                     scanf("%d",&i);
//                     push(i);
//                     break;
//                     }
//             case 3 : 
//                     {
//                     int value = peek();
//                     printf("Top element : %d\n",value);
//                     break;
//                     }
//             case 4 : 
//                     {
//                     if (isEmpty()){
//                         printf("Stack is Empty!");
//                     }
//                     else{
//                         printf("Stack is not Empty!");
//                     }
//                     break;
//                     }
//             case 5 :
//                     {
//                     display();
//                     break;
//                     }
//             case 6 :
//                     {
//                     printf("Exiting...");
//                     exit(0);
//                     }
//             default:
//                     printf("\nInvalid Choice!");
//         }
//     }
//     return 0;
// }

