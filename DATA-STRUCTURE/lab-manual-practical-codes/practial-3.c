// written by developer kush -> https://kushdeveloper.me 

#include <stdio.h>
// recursion;
long long int fact(int element) {
    if (element == 0 || element == 1) {
        return 1;
    }
    return element * fact((element - 1));
}
int main() {
    int num;
    printf("Enter a Number:");
    scanf("%d" , &num);
    printf("Factiorial of %d is: %lld",num ,  fact(num));
    return 0;
}
// itna hi hai khush ho ja 