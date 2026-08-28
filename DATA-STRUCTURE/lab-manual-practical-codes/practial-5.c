// written by developer kush -> https://kushdeveloper.me 
#include  <stdio.h>
struct Student
{
    int rollno;
    float marks;
};

int main() {
   struct Student s;
   struct Student *ptr;
   ptr = &s;
   ptr->rollno = 101;
   ptr->marks = 72.3;
   printf("rollNo of student is : %d\n" , ptr->rollno);
   printf("markss of student is: %.2f", ptr->marks);
   return 0;
}
// itna hi hai khush ho ja 