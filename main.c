#include <stdio.h>
#include "action.h"
#include "type.h"
#include "pokemon.h"
#include "dresseur.h"
#include <stdlib.h>
#include <time.h>

int main()
{
    
    printf("Bienvenue dresseur !\n");
    printf("Après un long chemin et beaucoup de combats avec ton équipe pokémon,\n");
    printf("voici la dernière étape de ton aventure : La ligue pokémon !!!\n");
    srand(time(NULL));  // Initialiser le générateur de nombres aléatoires

    initDresseurs();  // Initialiser les équipes des dresseurs

    // Créer le joueur et lui attribuer des Pokémon aléatoires
    Dresseur joueur = {"Joueur", "", {NULL}};
    attribuerPokemonAleatoires(&joueur);
    
    // Affronter chaque dresseur
    for (int i = 0; i < 3; i++) {
        printf("\nVous affrontez : %s\n", dresseurs[i].nom);

        // Combat entre le premier Pokémon de chaque équipe
        combatDresseur(&joueur, &dresseurs[i]);
    }
    freeDresseurs();  // Libérer la mémoire allouée pour les dresseurs
    return 0;
}