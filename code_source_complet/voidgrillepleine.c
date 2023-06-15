#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool grillePleine(t_grille tab){
    bool res, finPartie;
    int i, j;
    res=false;
    finPartie=false;
    for (j = 0; j < NBLIG, j++){
        for (i = 0; i < NBCOL; i++)
        {
            if (tab[i]=VIDE)
            {
                res=false;
            }
            else if (tab[i]!=VIDE)
            {
                res=true;
            }
        }
    }
    if (res=true){
        finPartie=true;
    }
    return finPartie;
}
