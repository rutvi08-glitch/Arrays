#include<stdio.h>

int main(){
    int i,j, car;
    char city;
    const char *city_names[] = {"Madras", "Delhi", "Calcutta", "Bombay"};
    int frequency[5][5] = { 0, 0, 0, 0 , 0};

    printf("\n\nEnter your city code followed by the car code");
    printf("\nEnter XX or xx to indicate end\n");

    printf("\nM - Madras\t1 - Ambassador\nD - Delhi\t2 - Fiat\nC - Calcutta \t3 - Dolphin\nB - Bombay\t4 - Maruti\n\n");

    for(i = 0; i<102; i++)
    {
        scanf("%c ", &city);
        if(city == 'x' || city == 'X')
            break;

        scanf("%d", &car);
    

        switch(city)
        {

            case 'M' : frequency[1][car]++;
                    break;
            case 'D' : frequency[2][car]++;
                    break;
            case 'C' : frequency[3][car]++;
                    break;
            case 'B' : frequency[4][car]++;
                    break;
        }
    }

    printf("\n\n Popularity table\n\n");
    printf("-------------------------------------------------------\n");
    printf("City  \t  Ambassador\tFiat\tDolphin\tMaruti\n");
    printf("-------------------------------------------------------\n");
    for(i=1; i<=4; i++)
    {
        printf("%-10s|", city_names[i-1]);

        for(j=1; j<=4; j++)
            printf("%7d", frequency[i][j]);
        
        printf("\n");
    }


return 0;
}