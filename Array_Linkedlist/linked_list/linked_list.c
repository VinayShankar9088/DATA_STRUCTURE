#include<stdio.h>
#include<stdlib.h>
struct stu *new(int);
void addnode_FIFO();
void traverse();
struct stu{
    int info;
    struct stu *next;
}*p,*temp,*head = NULL;

int main()
{
   int a,ch=1;
    while(ch!=0){    
    printf("Enter a number :- ");
    scanf("%d",&a);
    p = new(a);
    addnode_FIFO(p);
    printf("Enter 1 for continue or 0 for end");
    scanf("%d",&ch);
     }

     printf("the list is as follows - ");
     traverse(head);
     return 0;
}

struct stu *new(int a){
    p = ((struct stu*)malloc(sizeof(struct stu)));
    p->info = a;
    p->next = NULL;
    return p;
}

void addnode_FIFO(){
    temp = head;
    if(head == NULL){
        head = p;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    }}

    void traverse(){
        temp = head;
        while(temp!=NULL){
            printf("%d\t",temp->info);
            temp = temp->next;
        }
    }