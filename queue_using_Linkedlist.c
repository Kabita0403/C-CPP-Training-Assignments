#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void insert(struct node *ptr, int item)
{

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nMemory not available\n");
        return;
        
    }
    else
    {
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
            
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
            
        }
        
    }
}

void deleteNode(struct node *ptr)
{

    if (front == NULL)
    {

        printf("Underflow");

        return;
    }
    else
    {

        ptr = front;

        front = front->next;

        free(ptr);
    }
}

void printList()

{

    struct node *ptr = front;

    while (ptr)

    {

        printf("%d->", ptr->data);

        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{

    struct node *head = NULL;

    insert(head, 1);

    insert(head, 2);

    printf("front element: %d\n", front->data);

    deleteNode(head);

    printf("front element: %d\n", front->data);

    insert(head, 44);

    insert(head, 56);

    insert(head, 9);

    insert(head, 8);

    printList();

    return 0;
}