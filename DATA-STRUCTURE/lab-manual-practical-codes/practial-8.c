#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void creation_insertion_count_Node(struct Node **head , int item)
{ // creation 
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
     newNode->data = item;
     newNode->next = NULL;
    // insertion
    if(*head == NULL) {
        *head = newNode; 
    } else {
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
   temp->next = newNode;
    // display

    }

  struct Node *temp = *head;
// here we will count the number of Node in the linked list.....
int count  = 0;
   while (temp != NULL)
   {
    count++;
    temp = temp->next;
   }
   printf("NUMBER OF NODE IS %d\n", count);
};




int main() {
    struct Node *head = NULL;
    creation_insertion_count_Node(&head, 10);
    creation_insertion_count_Node(&head, 20);

return 0;
}
