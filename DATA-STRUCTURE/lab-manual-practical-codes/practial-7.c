#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// this function is from 6th practical.
void creation_insertion_display_Node(struct Node **head , int item)
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

   while (temp != NULL)
   {
    printf("%d ->", temp->data);
    temp = temp->next;
   }
   printf("NULL\n");
};

// this is for 7th practicaal
void deletionfromthebegining(struct Node **head) {
    if (*head == NULL) {
        printf("list is empty");
        return;
    }
    struct Node *temp = (*head)->next;
    free(*head);
    *head = temp;

    temp = *head;
while (temp != NULL)
   {
    printf("%d ->", temp->data);
    temp = temp->next;
   }  
    printf("NULL\n");

}


int main() {
    struct Node *head = NULL;
    creation_insertion_display_Node(&head, 10);
    creation_insertion_display_Node(&head, 20);
    creation_insertion_display_Node(&head, 30);
    creation_insertion_display_Node(&head, 40);
    creation_insertion_display_Node(&head, 50);
   deletionfromthebegining(&head);
   deletionfromthebegining(&head);
   deletionfromthebegining(&head);
return 0;
}
