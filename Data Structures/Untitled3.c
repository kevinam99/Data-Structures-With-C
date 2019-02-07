#include <stdio.h>
#include <stdlib.h>
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};

struct dnode *start = NULL;

void append(int);
void addatbeg(int);
void remov(int);
void display();

int main()
{
    int n, ch;
    do
    {
        printf("\n\nOperations on doubly linked list");
        printf("\n1. Append \n2. Add at beginning \n3. Remove\n4. Display\n0. Exit\n");
        printf("\nEnter Choice 0-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                append(n);
                break;
            case 2:
                printf("\nEnter number: ");
                scanf("%d", &n);
                addatbeg(n);
                break;
            case 3:
            	printf("\nEnter number to delete: ");
                scanf("%d", &n);
                remov(n);
                break;
            case 4:
                display();
                break;
        }
    }while (ch != 0);
}
void append(int num)
{
    struct dnode *nptr,  *temp = start;
    nptr = malloc(sizeof(struct dnode));
    nptr->data = num;
    nptr->next = NULL;
    nptr->prev = NULL;
    if (start == NULL)
    {
        start = nptr;
    } 
    else
    {
        while (temp->next != NULL)
            temp = temp->next;

        nptr->prev = temp;
        temp->next = nptr;
    }
}
void addatbeg(int num)
{
    struct dnode *nptr;
    nptr = malloc(sizeof(struct dnode));
    nptr->prev = NULL;
    nptr->data = num;
    nptr->next = start;

    if (start != NULL)
        start->prev = nptr;
    start = nptr;
}
void remov(int num)
{
    struct dnode *temp = start;
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            if (temp == start)
            {
                start = start->next;
                start->prev = NULL;
            } 
            else
            {
                if (temp->next == NULL)
                    temp->prev->next = NULL;
                else
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                free(temp);
            }
            return ;
        }
        temp = temp->next; 
    }
    printf("\n%d not found.", num);
}

void display()
{
	struct dnode *temp = start;
    printf("\n");

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } 
}
