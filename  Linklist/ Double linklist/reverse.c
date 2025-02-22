#include<stdio.h>
#include<stdlib.h>

struct Node{
        int data;
        struct Node*next,*prev ;
};

int main(){


struct Node *head ,*current,*nextnode;
        struct Node *newnode1=(struct Node*)malloc(sizeof(struct Node));
        struct Node *newnode2=(struct Node*)malloc(sizeof(struct Node));
        struct Node *newnode3=(struct Node*)malloc(sizeof(struct Node));
        struct Node *newnode4=(struct Node*)malloc(sizeof(struct Node));

head=newnode1;
newnode1->data=6;
newnode1->prev=NULL;
newnode1->next=newnode2;

newnode2->data=5;
newnode2->prev=newnode1;
newnode2->next=newnode3;

newnode3->data=1;
newnode3->prev=newnode2;
newnode3->next=newnode4;


newnode4->data=7;
newnode4->prev=newnode3;
newnode4->next=NULL;


//display
current=head;
while(current!=0){
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
}
 
return 0;
 
}