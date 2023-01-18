#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main ()
{
    int tab[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            tab[i][j]=i*j;
        }
    }
        for(int i=0;i<SIZE;i++)
        {
            for(int j=0;j<SIZE;j++)
            {
                printf("%d",tab[i][j]);
                printf(" ");
            }
        printf("\n");
        }
}
