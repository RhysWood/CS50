#include <stdio.h>

#define MAX_NAME_LENGTH 256

int main(void)
{
    char answer[MAX_NAME_LENGTH];
    printf("What's your name? ");
    fgets(answer, MAX_NAME_LENGTH, stdin);
    printf("Hello, %s", answer);
    return 0;
}