#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int data;
        struct Node *next;
        struct Node *prev;
};

int main()
{
        struct Node *head = NULL, *newnode, *tail, *temp;
        int n;
        printf("enter n");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
                newnode = (struct Node *)malloc(sizeof(struct Node));

                if (newnode == NULL)
                {
                        printf("Memory allocation failed\n");
                        return 1;
                }

                printf("Enter data: ");
                scanf("%d", &newnode->data);
                newnode->prev = NULL;
                newnode->next = NULL;

                if (head == NULL)
                {
                        head = tail = newnode;
                }
                else
                {
                        tail->next = newnode;
                        newnode->prev = tail;
                        tail = newnode;
                }
        }

        int pos;
        printf("enter the position");
        scanf("%d", &pos);
        if (pos > n)
        {
                printf("Invalid position");
        }
        else
        {
                int i = 1;
                temp = head;
                while (i < pos)
                {
                        temp = temp->next;
                        i++;
                }

                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);

                // Printing the linked list
                tail = head;
                printf("Linked List: ");
                while (tail != NULL)
                {
                        printf("%d ", tail->data);
                        tail = tail->next;
                }

                return 0;
        }
}
