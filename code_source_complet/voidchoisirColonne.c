#include <stdio.h>
#include <stdlib.h>

int choisirColonne(t_grille tab, char pion, int col){
    const char droite='d';
    const char gauche='q';
    char pions, decal;
    int v;
    v=4
    tab[v]=pions;
    decal=rien;
    while (decal!=getchar())
    {
        printf("Tapez q pour décalez votre pions a droite et d a gauche, si vous voulez jouer dans cette colonne tapez 'entrez'");
        scanf("%c",%decal);
        if (decal=gauche)
        {
            tab[v]=VIDE;
            tab[v-1]=pions;
        }
        else if (decal=droite)
        {
            tab[v]=VIDE;
            tab[v+1]=pions;
        }
    }
}