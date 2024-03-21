#include <stdio.h>
void rightcircularshift(int a, int b, int c)
{
    int* temp= &a;
    a = &b;
    b = &c;
    c = &temp;
    return;
}
int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    rightcircularshift( a, b, c);
    printf("\na= %d", *a);
    printf("\nb= %d", *b);
    printf("\nc= %d", *c);    
}
