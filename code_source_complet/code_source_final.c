#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char PION_A ='O';
const char PION_B ='X';
const char VIDE = ' ';
const char INCONNU = ' ';
const int NBLIG = 6;
const int NBCOL = 7;
const int COLONNE_DEBUT = NBCOL/2;

typedef char t_grille [NBLIG] [NBCOL]

void initGrille (t_grille); //fait
void afficher (t_grille, char, int); //fait
void jouer (t_grille ,char, int); //fait
bool grillePleine(t_grille tab); //fait
void finDePartie (char); //fait
estVainqueur (t_grille, char, int); //fait
trouverLigne (t_grille, int); //fait
choisirColonne (t_grille tableau, char unCaractere, int laColonne); //fait


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


void initGrille(t_grille tab){
    int i, j;
    for (j = 0; j < NBLIG, j++){

        for (i = 0; i < NBCOL; i++)
        {
            tab[i]tab[j]=VIDE;
        }
    }
}


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

void jouer (t_grille tab, char pion, int li, int col){
    choisirColonne()
    trouverLigne()
    int i, j, ligne;
    for (j = 0; j < NBLIG, j++)
    {
        for (i = 0; i < NBCOL; i++)
        {
            if (tab[i]!=VIDE)
            {
                ligne=tab[i]tab[j-1];

            }
        }
    } 
}


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

void finPartie(char pion)
{
    char vainqueur, numero1, numero2;
    numero1=PION_A;
    numero2=PION_B;
    if (vainqueur=numero1);
    {
        printf("Le joueur1 a gagné");
    }
    else if (vainqueur=numéro2)
    {
        printf("Le joueur 2 a gagné");
    }
    else if (finPartie=true)
    {
        printf("Il n'y a pas de gagnant");
    }
}

int main(){
    char vainqueur[20];
    int colonne, ligne;
    tab g;
    initGrille(tab);
    vainqueur!=INCONNU;
    afficher( t_grille, int col);
    while(vainqueur=INCONNU && !grillePleine(tab)){
        jouer(char vainqueur, t_grille  tab, int col);
        afficher(t_grille tab);
        if (res=1)
        {
            vainqueur=PION_A;
        }
        else if (finPartie!=-1)
        {
            jouer(char vainqueur, t_grille  tab, int col);
            afficher(t_grille tab);
            if (res=1)
            {
                vainqueur=PION_B;
            }
            
        }
        
    }
}