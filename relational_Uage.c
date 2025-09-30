#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Directly print the result of the condition (1 if true, 0 if false)
    printf(" \nEligibe for vote? %d", age > 18);

    return 0;
}
