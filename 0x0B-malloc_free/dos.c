#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
char h [] = "betty ";
char b[] = "holberton";
    s = strcat(h ,b);
    printf("%s\n", s);

    return (0);
}