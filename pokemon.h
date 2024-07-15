#ifndef POKEMON_H
#define POKEMON_H

typedef struct {
    char nom[50];
    char type[20];
    char attaques[4][50];
    char pointsForts[50];
    char pointsFaibles[50];
    int pointsDeVie;
    int attaque;
    int defense;
    int vitesse;
} Pokemon;

void afficherPokemon(Pokemon* p);

extern Pokemon pokemons[];

#endif // POKEMON_H
