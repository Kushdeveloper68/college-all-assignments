// written by developer kush -> https://kushdeveloper.me 
#include <stdio.h>
#include <stdlib.h>

// linked list creation , Node Structure , main function with head node creation. otherr functions are in other files.....
// NODE STRUCTURE   
struct Node
{
    int data; // u can use more data and of any types .
    struct Node *next;
};

int main() {
    // initialing head pointer
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;// no node to attach right now.
    return 0;
}