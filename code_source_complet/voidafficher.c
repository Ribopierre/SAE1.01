#include <stdio.h>
#include <stdlib.h>

void afficher (t_grille tab){
    int i, j;
    printf("  1   2   3   4    5   6   7")
    printf("╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦\n");
    for ( j = 0; j < NBLIG; j++)
    {
        for ( i = 0; i < NBCOL; i++)
        {
            printf("| %c", tab[i]tab[j]);
        }
        printf("╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬\n");
    }
    printf("╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩\n");
}