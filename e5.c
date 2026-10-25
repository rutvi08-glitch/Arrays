#include<stdio.h>
#define Maxgirls  4
#define Maxitems  3
int main()
{
    int value[Maxgirls][Maxitems];
    int girltotal[Maxgirls],itemtotal[Maxitems];
    int i, j, totalvalue = 0;


    printf("Input Data \n");
    printf("Enter vales one at a time row wise\n\n");
    for(i = 0; i < Maxgirls; i++)
    {
        girltotal[i] = 0;

        for(j = 0; j < Maxitems; j++)
        {
            scanf("%d", & value[i][j]);
            girltotal[i] += value[i][j];
        }
    }

    for(j=0; j<Maxitems; j++)
    {
        itemtotal[j] = 0;

        for(i=0; i<Maxgirls; i++)
            itemtotal[j] = itemtotal[j] + value[i][j];
    }

    for(i=0; i<Maxgirls; i++)
        totalvalue += girltotal[i];

    printf("\nGirls Total\n\n");

    for(i=0; i<Maxgirls; i++)
        printf("salesgirl[%d] = %d\n", i+1, girltotal[i]);
    printf("\n\nTotal Items sold");

    for(j=0; j<Maxitems; j++)
        printf("items[%d] = %d\n", j+1, itemtotal[j]);
    printf("\n\nTotal value = %d\n\n", totalvalue);

    return 0;
}