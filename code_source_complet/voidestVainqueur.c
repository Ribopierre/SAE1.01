#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estVainqueur(t_grille tab, int lig, int col){
    int i, j;
    bool res;
    res=false
    for ( j = 0; j < NBLIG; j++)
    {
        if (tab[i]tab[j]=tab[i+1]tab[j]=tab[i+1+1]tab[j]=tab[i+1+1+1]tab[j])
        {
            res=true;
        }
        for ( i = 0; i < NBCOL; i++)
        {
            if (tab[i]tab[j]=tab[i]tab[j+1]=tab[i]tab[j+2]=tab[i]tab[j+3])
            {
                res=true;
            }
            else if (tab[i]tab[j]=tab[i+1]tab[j+1]=tab[i+2]tab[j+2]=tab[i+3]tab[j+3])
            {
                res=true;
            }
            else if (tab[i]tab[j]=tab[i-1]tab[j-1]=tab[i-2]tab[j-2]=tab[i-3]tab[j-3])
            {
                res=true;
            }
            
        }  
    }
    return res;
}