// written by developer kush -> https://kushdeveloper.me 
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
};


void searching(struct Node *head, int dataTofind) {
      struct Node *temp = head;
// here we will search the node same to data to find number in the linked list.....
int count  = 1;
   while (temp != NULL)
   {
    if(temp->data == dataTofind) {
        printf("Node %d is found at %d\n", dataTofind , count);
       return;
    }
    count++;
    temp = temp->next;
   }
   if(temp == NULL) printf("Node Not Found\n");
}


int main() {
    struct Node *head = NULL;
    creation_insertion_count_Node(&head, 10);
    creation_insertion_count_Node(&head, 20);
    creation_insertion_count_Node(&head, 30);
    creation_insertion_count_Node(&head, 40);
    creation_insertion_count_Node(&head, 50);
   searching(head , 40);
   searching(head , 70);
return 0;
}
