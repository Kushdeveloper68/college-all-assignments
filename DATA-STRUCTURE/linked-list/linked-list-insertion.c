// written by developer kush -> https://kushdeveloper.me
// so insertion i thing there is many type of insertion lets list them out
// 1. insert at the begining
// 2. insert at the end
// 3. insert in any specific place given by the user in it we have 2 more types:
//       -> insert after the given place
//       -> insert before the given place
// we will create all the function sperately.

#include <stdio.h>
#include <stdlib.h>
// Structure for a linked list node
struct Node
{
    int data;
    struct Node *next;
};
// NEW NODE CREATIONN
struct Node *createNewNode(int item)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = NULL;
    return newNode;
}

// INSERT AT THE BEGINING
void insertAtTheBegining(struct Node **head, int item)
{
    struct Node *newNode = createNewNode(item);
    newNode->next = *head;
    *head = newNode;
}

// INSERT AT THE END
void insertAtTheEnd(struct Node *head, int item)
{
    struct Node *newNode = createNewNode(item);
    if (head == NULL)
        return;

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = newNode;
    printf("inserted");
    return;
}

// INSERT AT ANY SPECIFIC PLAC.. FIRST AFTER.
void insertAfterThePlace(struct Node *head, int value, int itemToInsert)
{
    struct Node *newNode = createNewNode(itemToInsert);
    while (head != NULL && head->data != value)
    {
        head = head->next;
    }
    if (head == NULL)
    {
        printf("value not found");
        return;
    }

    newNode->next = head->next;
    head->next = newNode;
    printf("Inserted at a specific place");
    return;
}

void insertBeforeThePlace(struct Node **head, int value, int itemToInsert)
{
    struct Node *newNode = createNewNode(itemToInsert);
    struct Node *prev = NULL;
    struct Node *curr = *head;


    while (curr != NULL && curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("value not found");
        return;
    }
if (prev == NULL)
    {
        newNode->next = *head;
        *head = newNode;
        printf("inserted before the place");
        return;
    }
    prev->next = newNode;
    newNode->next = curr;
    printf("inserted before the place");
    return;
}

int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    return 0;
}