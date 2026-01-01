#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = "World";

    printf("Length: %lu\n", strlen(s1));
    strcpy(s1, s2);
    printf("Copy: %s\n", s1);
    strcat(s1, " C");
    printf("Concat: %s\n", s1);
    printf("Compare: %d\n", strcmp(s1, s2));

    return 0;
}
