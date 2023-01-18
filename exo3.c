#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 10

void Color(int couleurDuTexte,int couleurDeFond) // procedure d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void print(char tab[SIZE][SIZE],char tab2[SIZE][SIZE],int taille)
{
    Color(12,0);
    for(int j=0;j<SIZE-7;j++)
    {
        for(int i=0;i<SIZE;i++)
        {
            printf("%c",tab2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    Color(15,0);
    for(int j=SIZE-7;j<SIZE-3;j++)
    {
        for(int i=0;i<SIZE;i++)
        {
            printf("%c",tab[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    Color(6,0);
    for(int j=SIZE-3;j<SIZE;j++)
    {
        for(int i=0;i<SIZE;i++)
        {
            printf("%c",tab2[i][j]);
            printf(" ");
        }
        printf("\n");
    }

}



void main ()
{
    char tab[SIZE][SIZE];
    char tab2[SIZE][SIZE];
    for(int j=0;j<SIZE;j++)
    {
        for(int i=0;i<SIZE;i++)
        {
            tab[i][j]='_';
        }
    }
    for(int k=0;k<SIZE;k++)
    {
        for(int e=0;e<SIZE;e++)
        {
            tab2[e][k]='_';

            if(e%2 ==0)
            {
                tab2[e][k]='X';
            }
        }
    }
        for(int k=0;k<SIZE;k++)
    {
        for(int e=0;e<SIZE;e++)
        {
            if((k+e)%2 == 0)
            {
                tab2[e][k]='X';
            }
            else
            {
                 tab2[e][k]='_';
            }
        }
    }
     print(tab,tab2,SIZE);
}


