// written by developer kush -> https://kushdeveloper.me 
#include <stdio.h>
#include <stdlib.h>
// Structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete node using matching data....
// i am using double pointer because i am not returing the head to main , so directly changing the main head pointer through **
void deletionOfNode(struct Node **head, int key) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

  struct Node *temp = *head;
  struct Node *prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next; //unlink the node to remove from the list
        free(temp); // removing from the list is not means deleted from teh memory OR u can say stack s free the memory.
        printf("Node with value %d deleted.\n", key);
        return;
    }
    while (temp != NULL && temp->data != key) // check that data is equal to key.... 
    {
        prev = temp; // order 1 
       temp = temp->next; // order 2 don't swap
    }
// If key was not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", key);
}


int main() {
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    // you can call the function here.
    return 0;
}