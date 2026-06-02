//  ********* linked list Creation,Traveser and Insertion****************

#include<stdio.h>
#include<stdlib.h>
void creatlist();
void traverse();
void insertbeg();
void insertend();
struct node{
    int data;
    struct node *next;
};
struct node* new;
struct node* temp;
struct node* head = NULL;


 
int main(){
    printf("creat your list now ");
    creatlist();
    traverse();
    int n;
    printf("\nEnter 1 for insert an element in starting or \n0 in the end of linled list ");
    scanf("%d",&n);
    if(n==1){
        insertbeg();
        printf("\nnow your linked list is updated :- ");
        traverse();
    }
    else if(n==0){
        insertend();
        printf("\nnow your linked list is updated :- ");
        traverse();
    }
    else{
        printf("\nsomething went wrong!");
    }
    
    return 0;
}



void creatlist(void)
{
    int choice;
    do{        
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(head==NULL){
        head = temp = new;        
    }
    else{
        temp->next = new;
        temp = temp->next;
    }
    printf("\nEnter 1 to continew and 0 to stop ");
    scanf("%d",&choice);
    }while(choice==1);
}
void traverse(){
    temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void insertbeg(){
    struct node* new1;
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter element to insert in list :- ");
    scanf("%d",&new->data);
    new->next = head;
    head = new;
}
void insertend(){
    struct node* new1;
    new1 = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter element to insert in list :- ");
    scanf("%d", &new1->data);
    new1->next = NULL;

    temp = head;
    while(temp != NULL){
        if(temp->next == NULL){
            temp->next = new1;
            break;
        }
        temp = temp->next;
    }

}