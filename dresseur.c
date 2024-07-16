#include "dresseur.h"
#include "pokemon.h"
#include <stdio.h>

Dresseur dresseurs[3];

void initDresseurs() {
    dresseurs[0] = (Dresseur){"Dresseur Crypto", "Spectre", {&pokemons[1], &pokemons[2], &pokemons[3], &pokemons[4], &pokemons[5], &pokemons[6]}};
    dresseurs[1] = (Dresseur){"Dresseur PL/SQL", "Dragon", {&pokemons[7], &pokemons[8], &pokemons[9], &pokemons[10], &pokemons[11], &pokemons[12]}};
    dresseurs[2] = (Dresseur){"Dresseur C", "Psy", {&pokemons[13], &pokemons[14], &pokemons[15], &pokemons[16], &pokemons[17], &pokemons[18]}};
}

void afficherEquipe(Dresseur* dresseur) {
    printf("Équipe de %s:\n", dresseur->nom);
    for (int i = 0; i < 6; i++) {
        afficherPokemon(dresseur->equipe[i]);
    }
}
