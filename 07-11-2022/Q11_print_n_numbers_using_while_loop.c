// C program to display n natural numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter total numbers to be printed: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        printf("%d\n", i);
}