#include "dresseur.h"
#include "pokemon.h"
#include <stdio.h>

Dresseur dresseurs[3];
Pokemon* listDresseur1 = NULL;
Pokemon* listDresseur2 = NULL;
Pokemon* listDresseur3 = NULL;

void initDresseurs() {
    listDresseur1 = (Pokemon*)malloc(6 * sizeof(Pokemon));
    listDresseur2 = (Pokemon*)malloc(6 * sizeof(Pokemon));
    listDresseur3 = (Pokemon*)malloc(6 * sizeof(Pokemon));
    if (listDresseur1 == NULL || listDresseur2 == NULL || listDresseur3 == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        exit(1);
    }
    memcpy(listDresseur1, pokemons, 6 * sizeof(Pokemon));
    memcpy(listDresseur2, pokemons + 6, 6 * sizeof(Pokemon));
    memcpy(listDresseur3, pokemons + 12, 6 * sizeof(Pokemon));
    dresseurs[0] = (Dresseur){"Dresseur Crypto", "Avalanche de BITCOINS !!!!", {&listDresseur1[0], &listDresseur1[1], &listDresseur1[2], &listDresseur1[3], &listDresseur1[4], &listDresseur1[5]}};
    dresseurs[1] = (Dresseur){"Dresseur PL/SQL", "Je vais inonder ton journal d'erreurs jusqu'à te saturer le disque.", {&listDresseur2[0], &listDresseur2[1], &listDresseur2[2], &listDresseur2[3], &listDresseur2[4], &listDresseur2[5]}};
    dresseurs[2] = (Dresseur){"Dresseur C", "Utilise malloc sans free et regarde ta RAM fondre.", {&listDresseur3[0], &listDresseur3[1], &listDresseur3[2], &listDresseur3[3], &listDresseur3[4], &listDresseur3[5]}};
}

void freeDresseurs() {
    free(listDresseur1);
    free(listDresseur2);
    free(listDresseur3);
}
