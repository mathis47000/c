#include "dresseur.h"
#include "pokemon.h"
#include <stdio.h>

Dresseur dresseurs[3];
Pokemon* list = NULL;
void initDresseurs() {
    list = (Pokemon*)malloc(18 * sizeof(Pokemon));
    if (list == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
    }
    memcpy(list, pokemons, 18 * sizeof(Pokemon));
    printf("%s\n", list[0].nom);
    dresseurs[0] = (Dresseur){"Dresseur Crypto", "Avalanche de BITCOINS !!!!", {&list[1], &list[2], &list[3], &list[4], &list[5], &list[6]}};
    dresseurs[1] = (Dresseur){"Dresseur PL/SQL", "Je vais inonder ton journal d'erreurs jusqu'à te saturer le disque.", {&list[7], &list[8], &list[9], &list[10], &list[11], &list[12]}};
    dresseurs[2] = (Dresseur){"Dresseur C", "Utilise malloc sans free et regarde ta RAM fondre.", {&list[13], &list[14], &list[15], &list[16], &list[17], &list[18]}};
}

void afficherEquipe(Dresseur* dresseur) {
    printf("Équipe de %s:", dresseur->nom);
    // afficherPokemon(dresseur->equipe[0]);
    printf("\n");
}

void freeDresseurs() {
    free(list);
}
