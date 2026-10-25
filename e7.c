#include<stdio.h>

int main ()
{
    printf("Enter The values for a matrix of order 2x3 to find its transpose of order 3x2\n\n");
    printf("To terminate, input X and enter");
    
    int a[2][3];
    int i, j;


    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d ", & a[i][j]);

    }
    printf("Your given matrix is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    printf("The transpose of your given matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }






    return 0;
}