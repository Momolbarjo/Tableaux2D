#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 10
#define COL 10


void affiche(int tab[ROW][COL],int lignes, int col)
{
    int x,y;
    for(x=0;x<lignes;x++)
    {
        for(y=0;y<col;y++)
        {
            printf("%d",tab[x][y]);
            printf(" ");
        }    printf("\n");

    }

}


void main()
{
    srand(time(NULL));
    int tab2D[ROW][COL];
    int i,j,z,somme_tmp,tmp,somme;
    for(j=0;j<COL;j++)
    {
        for(i=0;i<ROW;i++)
        {
            z=rand()%6;
            tab2D[i][j]=z;
        }
    }


    affiche(tab2D,ROW,COL);

    for(int i=0;i<ROW;i++)
    { somme=0;
        for(int j=0;j<COL;j++)
        {
           somme_tmp=tab2D[i][j];
           somme=somme+somme_tmp;
        }
        printf("La somme des elements de la ligne %d est %d\n", i+1,somme);

    }

     for(int i=0;i<COL;i++)
    { somme=0;
        for(int j=0;j<ROW;j++)
        {
           tmp=tab2D[j][i];
           somme=somme+tmp;
        }
        printf("La somme des elements de la colonne %d est %d\n", i+1,somme);
    }
    somme=0;
    j=0;
    for(i=0;i<ROW;i++){

        tmp=tab2D[j][i];
        somme=somme+tmp;
        j++;
    }
        printf("La somme de la diagonale vaut%d",somme);
}
