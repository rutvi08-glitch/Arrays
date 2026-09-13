#include<stdio.h>
//This program is written to compute the sum of squares of ten consecutive numbers
int main()
{
    int i;
    int total = 0;
    int x[10];
    printf("\n\nThis program is used to compute the sum of squares of consecutive numbers");
    printf("\nEnter 10 real numbers:\n\n");
    
    for(i=0; i<10; i++)
        scanf("%d", &x[i]);

    for(i=0; i<=10; i++)
        total += x[i] * x[i];

    printf("The total evaluated value is %d",total );



    return 0;
}