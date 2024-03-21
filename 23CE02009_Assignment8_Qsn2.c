#include <stdio.h>
int main()
{
    int r, c, arr1[10][10], arr2[10][10];
    printf("Enter the dimensions of 1st matrix: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter the elements of 1st matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the dimensions of 2nd matrix: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter the elements of 2nd matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
}