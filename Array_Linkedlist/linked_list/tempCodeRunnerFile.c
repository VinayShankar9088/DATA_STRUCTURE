#include<stdio.h>
#include<stdlib.h>
void creatlist();
void travers();
void deletion();
void insertion();
struct node{
            int data;
            struct node* next;
        } *new , *head = NULL, *temp;


int main(){
    creatlist();
    travers();
    int t;
    printf("enter 1 for insertion \n 2 for deletion or 0 to skip\n");
    scanf("%d",&t);
    switch (t)
    {
    case 1:
        insertion();
        break;
    case 2:
        deletion();
    case 0:
            printf("skipped \n end of program");
        break;
    default:
            printf("wrong choise . chose 1 or 2");
        break;
    }
    return 0;
}

void creatlist(){
    int choice;
    do{
        
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter a data :- ");
        scanf("%d",&new->data);
        new->next = NULL;
        if(head == NULL){
            head = temp = new;
        }
        else{
            temp->next = new;
            temp = temp->next;
        }
        printf("enter choice \n 1. to continue \n 0. for stop\n");
        scanf("%d",& choice);
    }while(choice == 1);
};

void travers(){
    temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
};


void deletion(){
    temp = head;
    int n = 1;
    int x;
    struct node *del;
    printf("enter no. of node , you want to remove : ");
    scanf("%d",&x);

    while(n==x){
        // printf("%d\t",temp->data);
        del = temp;
        temp = temp->next;
        n++;
    }
    del->next = temp->next;
    free(del);
    travers();
};

void insertion(){
    temp = head;
    int n1 = 1;
    int x1;
    struct node *insrt, *new1;
    new1 = (struct node*)malloc(sizeof(struct node));
    printf("\nenter no. of position , where you want to insert  : ");
    scanf("%d",&x1);
    printf("enter data :- ");
    scanf("%d",&new1->data);
 

    while(n1==x1){
        insrt = temp;
        temp = temp->next;
        n1++;
    }
    insrt->next = new1;
    new1->next = temp;
    free(insrt);
    travers();
};