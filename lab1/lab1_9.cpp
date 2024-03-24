#include <stdio.h>

int main() {
    const int K = 5;
    char s1[100];
    char s2[K];
    char s3[255];

    printf("Enter s1: ");
    scanf("%99s", s1);

    while(getchar() != '\n');

    printf("Enter s2: ");
    scanf("%4s", s2);

    while(getchar() != '\n');

    printf("Enter s3: ");
    scanf("%254[^\n]", s3);

    printf("*%s*\n", s1);
    printf("*%s*\n", s2);
    printf("*%s*\n", s3);

    return 0;
}
