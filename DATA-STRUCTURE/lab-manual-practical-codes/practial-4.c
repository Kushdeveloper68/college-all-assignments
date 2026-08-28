// written by developer kush -> https://kushdeveloper.me 
#include <stdio.h>
int front = -1;
int rear = -1;
int lengthOfQueue = 30;
int queue[30] = {};
// insertion function 
void Enqueue(int element) {
   if (rear >= lengthOfQueue) printf("queue is overflow");
   if (front == -1) front = 0;
   rear += 1;
   queue[rear] = element; 
   printf("%d is instered\n", element);
    return;
}
void Dequeue() {
    if (rear == -1 && front > rear) printf("queue is underflow");
    queue[front] = NULL;
    if (front == rear) front = rear = -1;
    else front += 1;
    printf("Dequeue successfully\n");
}
void displayQueue() {
    for (int i = 0; i < lengthOfQueue; i++)
    {
      printf("%d ->" , queue[i]);
    }
    
}
int main () {
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Dequeue();
    Dequeue();
    Dequeue();
    displayQueue();
    return 0;
}

// itna hi hai khush ho ja 