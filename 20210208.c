//P.K.Hashan 21544
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //declare variables
    int arr1[3][3], arr2[3][3], r, c;

    //input array 1
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("Enter a value for arr1[%d][%d]: ",r,c);
            scanf("%d",&arr1[r][c]);
        }
    }

    printf("\n");

    //input array 2
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("Enter a value for arr2[%d][%d]: ",r,c);
            scanf("%d",&arr2[r][c]);
        }
    }

    //all outputs
    printf("\n\nArray 1 :\n");
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("%d ",arr1[r][c]);
        }
    printf("\n");
    }

    printf("\n\nArray 2 :\n");
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("%d ",arr2[r][c]);
        }
    printf("\n");
    }
}

