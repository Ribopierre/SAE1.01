#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int trouverLigne(t_grille tab, int col )
{
    bool res, colPleine;
    int j;
    res=0;
    colPleine=false;
    for (j = 0; j < NBLIG, j++)
    {
        // if (tab[j]=VIDE)
        // {
        //     res=0;
        // }
        if (tab[j]!=VIDE)
        {
            res=-1;
        }
    }
    if (res=-1){
        colPleine=-1;
    }
    return colPleine;
}