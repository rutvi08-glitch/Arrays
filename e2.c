#include<stdio.h>
//Aim: To write a program to count the number of students in each range of marks
int main()
{
    int count[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//to store the count of number of students
    int Marks[50] = {43, 65, 51, 7, 79, 11, 56, 61, 8, 9, 5, 36, 07, 49, 55, 63, 74, 81, 49, 37, 40, 49, 16, 75, 87, 91, 33, 4, 58, 78, 65, 56, 76, 67, 45, 54, 36, 63, 12, 21, 73, 49, 51, 19, 39, 49, 68, 93, 85, 59};//to store the marks obtained by each student
    int i;

    for(i=0; i<50; i++)
    {   
        if(Marks[i]== 100)
            count[9]++;
        else
            count[Marks[i] / 10]++;
    }



    printf("\n\tRANGE\tFrequency\n");
    printf("--------------------------\n");

    for(i=0; i<10; i++)
    {
    if(i == 9)
        printf("%d - 100\t%d\n", i*10, count[i]);
    else
        printf("%d - %d\t\t%d\n", i*10, i*10+9, count[i] );
    }


    return 0;
}