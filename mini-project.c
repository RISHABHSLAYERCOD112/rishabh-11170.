#include <stdio.h>
void printNumber(int n) {
    int i;
    printf("\n Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
void printEven(int n) {
    int i;
    printf("\n Even number up to %d:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}
void printOdd(int n) {
    int i;
    printf("\n Odd number up to %d:\n", n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int choice, n;
    printf(" Menu Driven Program \n");
    printf("1. Print number from 1 to n\n");
    printf("2. Print even number up to n\n");
    printf("3. Print odd number up to n\n");
    printf("4. Exit \n");

 
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Enter value of N: ");
        scanf("%d", &n);
    }
    switch (choice) {
        case 1:printNumber(n);
            break;

        case 2:printEven(n);
            break;

        case 3:printOdd(n);
            break;

        case 4:printf("Exiting the program.\n");
             break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
}
