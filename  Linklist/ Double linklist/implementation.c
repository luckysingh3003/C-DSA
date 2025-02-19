#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    struct Node *head = NULL, *newnode, *temp;
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
            head = temp = newnode;  
        } else {
                temp->next=newnode;
                newnode->prev=temp;
                temp=newnode;
         
        }

        
    }
 
    // Printing the linked list
    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    

    return 0;
}
