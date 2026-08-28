// written by developer kush -> https://kushdeveloper.me 

#include <stdio.h>
int arr[20] = {};
int top = -1;
int lengthOfStack = 20;

void pushElement(int item)
{
    if (top >= lengthOfStack)
    {
        printf("stack is overflow");
        return;
    }
    top += 1;
    arr[top] = item;
    printf("insert \n");
}

void popEelement() {
    if (top == -1)
    {
      printf("stack is empty");
      return;
    }
    top -=1;
    printf("poped");
    
}
int main()
{
    pushElement(10);
    pushElement(20);
    pushElement(30);
    pushElement(40);
    pushElement(50);
    pushElement(60);
    popEelement();
    int i = 0;
    while (i < lengthOfStack)
    {
        printf("%d ->", arr[i]);
        i++;
    }
    
}
// itna hi hai khush ho ja 