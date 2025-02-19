#include<stdio.h>
#include<stdlib.h>


struct Node{
        int data;
        struct Node*next  ;

};
int main(){
struct Node *head ,*temp,*prevnode,*nextnode,*currentnode;
struct Node* newnode1=(struct Node*)malloc(sizeof(struct Node));
struct Node* newnode2=(struct Node*)malloc(sizeof(struct Node));
struct Node* newnode3=(struct Node*)malloc(sizeof(struct Node));
struct Node* newnode4=(struct Node*)malloc(sizeof(struct Node));


head=newnode1;
newnode1->data=5;
newnode1->next=newnode2;


newnode2->data=6;
newnode2->next=newnode3;


newnode3->data=1;
newnode3->next=newnode4;


newnode4->data=7;
newnode4->next=NULL;

prevnode=NULL;
currentnode=nextnode=head;
while(nextnode!=0)
{
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
}
head=prevnode;
temp=head;
while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
}
return 0;


}