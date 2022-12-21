#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("Values before swapping:\n");
    printf("a:\t%d\nb:\t%d\n", a, b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("Values after swapping:\n");
    printf("a:\t%d\nb:\t%d\n", a, b);
}