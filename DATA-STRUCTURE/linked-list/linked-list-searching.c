// written by developer kush -> https://kushdeveloper.me 
#include <stdio.h>
#include <stdlib.h>
// Structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

void search(struct Node *head, int NodeValueToFind) {
    while (head != NULL && head->data != NodeValueToFind)
    {
        head = head->next;
    }
    if (head == NULL)
{
    printf("Node not found");
    return;
}
   printf("%d Node found", head->data);
}
int main() {
    struct Node* head = NULL;
    return 0;
}