#include "dresseur.h"
#include "pokemon.h"
#include <stdio.h>

Dresseur dresseurs[3];

void initDresseurs() {
    dresseurs[0] = (Dresseur){"Dresseur Crypto", "Spectre", {&pokemons[19], &pokemons[20], &pokemons[19], &pokemons[20], &pokemons[19], &pokemons[20]}};
    dresseurs[1] = (Dresseur){"Dresseur PL/SQL", "Dragon", {&pokemons[21], &pokemons[22], &pokemons[21], &pokemons[22], &pokemons[21], &pokemons[22]}};
    dresseurs[2] = (Dresseur){"Dresseur C", "Psy", {&pokemons[23], &pokemons[24], &pokemons[23], &pokemons[24], &pokemons[23], &pokemons[24]}};
}

void afficherEquipe(Dresseur* dresseur) {
    printf("Équipe de %s:\n", dresseur->nom);
    for (int i = 0; i < 6; i++) {
        afficherPokemon(dresseur->equipe[i]);
    }
}
