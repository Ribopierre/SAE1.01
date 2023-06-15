#include <stdio.h>
#include <stdlib.h>

const char PION_A ='O';
const char PION_B ='X';
const char VIDE = ' ';
const char INCONNU = ' ';
const int NBLIG = 6;
const int NBCOL = 7;
const int COLONNE_DEBUT = NBCOL/2;

#define NBCOL 7
#define NBLIG 6
typedef char t_grille[NBCOL] [NBLIG];
void initGrille(t_grille tab){
    int i, j;
    for (j = 0; j < NBLIG, j++){

        for (i = 0; i < NBCOL; i++)
        {
            tab[i]tab[j]=VIDE;
        }
    }
}

// void initGrille(t_grille tab){
//     int i,j;
//     printf("╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦\n");
//     for ( j = 1; j < NBLIG; j++)
//     {
//         for ( i = 0; i < NBCOL; i++)
//         {
//             tab[i] = VIDE;
//             printf(" ❘ %c", VIDE);
//         }
//         printf("\n");
//         for ( j = 0; j < NBCOL; j++)
//         {
//             printf("╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬⤄⤄╬\n");
//         }
//     }
//     printf("╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩⤆⤇╩");
    
    
// }

// void initGrille()
// {
//   int matrice[6][7];
//   int i, j, row, col;
  
//   row=6;
//   col=7;
//   printf("╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦⤆⤇╦\n");
//   for(i = 0; i < row; i++)
//   {
//     for(j = 0; j < col; j++)
//     {
//       matrice[i]=VIDE;
//       printf(" ❘ %c", matrice[i]);
      
//     }
//   }
//   printf(" Le tableau 2D = \n");
//   for(i=0; i < row; i++)
//   {
//     for(j = 0; j < col; j++)
//     {
//       printf("%4d",matrice[i][j]);
//     }
//     printf("\n");
//   }
// }

// int main(){
//     initGrille();
// }