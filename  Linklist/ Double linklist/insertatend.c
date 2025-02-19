#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    struct Node *head = NULL, *newnode, *temp,*tail;
    int n;
    printf("enter n");
    scanf("%d",&n);

     for(int i=0;i<n;i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));

        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev=NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = tail = newnode;  
        } else { 
                tail->next=newnode;
                newnode->prev=tail;
                tail=newnode;
         
        }

        
    }

//     insert at end

newnode=(struct Node*)malloc(sizeof(struct Node));
printf("enter node to be insert");
scanf("%d",&newnode->data);
newnode->prev=NULL;
newnode->next=NULL;

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
 
    // Printing the linked list
    tail = head;
    printf("Linked List: ");
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->next;
    }
    

    return 0;
}
