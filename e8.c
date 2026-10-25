#include<stdio.h>

int main(){

    int sum, i, j, k ;
    int a[2][3] = { {2, 1, 3},{4, 5, 6} };
    int b[3][3] = { {9, 8, 7},{5, 4, 3},{7, 4, 9} };
    int c[2][3] = { {0, 0, 0}, {0, 0, 0}};
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            sum = 0;
            for(k=0; k<3; k++)
            {
                sum = sum + (a[i][k]*b[k][j]);
                c[i][j] = sum;
            }
        }
    }

    printf("The multiplied matrix is:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}