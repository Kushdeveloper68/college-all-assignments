// written by developer kush -> https://kushdeveloper.me 
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    
};
// here is the counter function other default things like struct and main function you can see in another file index.c for default things in main and headers
// COUNTER FUNCTION
int counter(struct Node *head) {
    struct Node *temp;
    temp = head;
     int count;
    while (temp != NULL)
    {
        count++;
        temp =  temp->next;
    }
    return count;
}

// written by developer kush -> https://kushdeveloper.me 





// int main() {
//     struct Node *head;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = 10;
//     head->next = NULL;

//     return 0;
// }