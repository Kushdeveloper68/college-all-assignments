// written by developer kush -> https://kushdeveloper.me 

#include <stdio.h>
#include <stdlib.h>
// Structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    return 0;
}