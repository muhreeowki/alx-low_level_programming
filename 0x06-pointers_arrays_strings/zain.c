#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hellodfgh";
    char s2[] = "Hellodfghf";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
