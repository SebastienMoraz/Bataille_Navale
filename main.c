#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>


void Title();
void Aide();

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleTitle("Bataille Navale");
    char valide = 88;
    char louper = 79;
    int caseAvecBateau = 0;
    int choix = 0;
    int inc = 1;
    int compteur = 50;
    int win = 0;
    int colonne = 0;
    int ligne = 0;

    int carte1[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,5,5,5,5,5,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,4,0,0,0},
            {0,3,3,3,0,0,4,0,0,0},
            {0,0,0,0,0,0,4,0,0,0},
            {0,0,0,0,0,0,4,0,0,0},
            {0,0,0,0,0,0,0,0,2,0},
            {0,0,0,6,6,6,0,0,2,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte2[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte3[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte4[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte5[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte6[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte7[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte8[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte9[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
    int carte10[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };


    do{
        inc = 1;
        Title();
        printf("    1   2   3   4   5   6   7   8   9   10  Colonne\n");
        printf("   ");
        for (int i = 0; i < 41; ++i) {
            printf("-");
        }
        printf("\n");
        for (int ligne = 0; ligne < 10; ++ligne) {
            printf("%2d ",inc);
            for (int colonne = 0; colonne < 10; ++colonne) {
                if(carte1[ligne][colonne] == 1){
                    printf("| %c ",valide);
                } else if (carte1[ligne][colonne] == 9){
                    printf("| %c ",louper);
                }else{
                    printf("|   ");
                }

            }
            printf("|\n");
            printf("   ");
            for (int i = 0; i < 41; ++i) {
                printf("-");
            }
            inc++;
            printf("\n");
        }

        int porteAvions = 0;
        int croiseur = 0;
        int contreTorpilleurs1 = 0;
        int contreTorpilleurs2 = 0;
        int totalContreTorpilleurs = 0;
        int torpilleur = 0;

        for (int k = 0; k < 10; ++k) {
            for (int i = 0; i < 10; ++i) {
                if (carte1[k][i] == 5){
                    porteAvions++;
                } else if (carte1[k][i] == 4){
                    croiseur++;
                } else if (carte1[k][i] == 3){
                    contreTorpilleurs1++;
                } else if (carte1[k][i] == 2){
                    torpilleur++;
                } else if (carte1[k][i] == 6){
                    contreTorpilleurs2++;
                }
            }
        }
        if (porteAvions != 0){
            porteAvions = 1;
        }
        if (croiseur != 0){
            croiseur = 1;
        }
        if (contreTorpilleurs1 != 0){
            totalContreTorpilleurs++;
        }
        if (contreTorpilleurs2 != 0){
            totalContreTorpilleurs++;
        }
        if (torpilleur != 0){
            torpilleur = 1;
        }


        printf("Ligne\n\nCompteur : %d\tPorte-avions : %d\tCroiseur : %d\tContre-torpilleurs : %d\tTorpilleur : %d\n\n", compteur, porteAvions, croiseur, totalContreTorpilleurs, torpilleur);

        do{
            printf("Veuillez entrer une colonne (11 - aide) :");
            scanf("%d", &colonne);
            if (colonne == 11){
                Aide();
            }
        }while (colonne <=0 || colonne >= 11);


        do{
            printf("Veuillez entrer une ligne (11 - aide) :");
            scanf("%d", &ligne);
            if (ligne == 11){
                Aide();
            }
        }while (ligne<=0 || ligne >= 11);

        if (carte1[ligne-1][colonne-1] == 1 || carte1[ligne-1][colonne-1] == 9){
            compteur++;
        }

        if (carte1[ligne-1][colonne-1] == 5 || carte1[ligne-1][colonne-1] == 4 || carte1[ligne-1][colonne-1] == 3 || carte1[ligne-1][colonne-1] == 2 || carte1[ligne-1][colonne-1] == 1 || carte1[ligne-1][colonne-1] == 6){
            carte1[ligne-1][colonne-1] = 1;
        }else {
            carte1[ligne-1][colonne-1] = 9;
        }

        caseAvecBateau = 0;
        for (int j = 0; j < 10; ++j) {
            for (int i = 0; i < 10; ++i) {
                if (carte1[j][i] == 2 || carte1[j][i] == 3 || carte1[j][i] == 4 || carte1[j][i] == 5 || carte1[j][i] == 6){
                    caseAvecBateau++;
                }
            }
        }
        if (caseAvecBateau == 0){
            win = 1;
        }
        compteur--;
        system("cls");
    }while (compteur > 0 && win == 0);
    Title();
    if (compteur == 0){
        printf("Vous avez perdu\n");
    }
    if (win == 1){
        printf("Vous avez gagné !!\n");
    }

    printf("Voulez vous rejouer ? \n");
    printf("1 - oui\n");
    printf("2 - non\n");
    printf("Votre choix :");
    scanf("%d", &choix);
    switch (choix){
        case 1:
            main();
            break;
        case 2:
            return 0;
    }

    return 0;
}

void Title(){
    printf("---------------\n");
    printf("Bataille Navale\n");
    printf("---------------\n\n");
}



void Aide(){
    printf("\n\t ________");
    printf("\n\t|  AIDE  |");
    printf("\n\t|________|\n");
    printf("\n- La croix indique que vous avez touché un bateau");
    printf("\n- Le rond indique que vous avez loupé les bateaux");
    printf("\n\nIl y a en tout : \n 1 porte-avion (5 cases)\n 1 croiseur (4 cases)\n 2 contre-torpilleurs (3 cases)\n 1 torpilleur (2 cases)");
    printf("\n\n- Le but du jeu est de trouver tout les bateaux sur la carte\n  avec le moins de coup possible");

    printf("\n\n");
}