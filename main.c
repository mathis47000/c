#include <stdio.h>
#include "action.h"
#include "type.h"
#include "pokemon.h"
#include "dresseur.h"
#include <stdlib.h>
#include <time.h>

int main()
{
    
    
    srand(time(NULL));  // Initialiser le générateur de nombres aléatoires

    initDresseurs();  // Initialiser les équipes des dresseurs

    // Créer le joueur et lui attribuer des Pokémon aléatoires
    Dresseur joueur = {"Joueur", "", {NULL}};
    attribuerPokemonAleatoires(&joueur);
    
    // Affronter chaque dresseur
    for (int i = 0; i < 3; i++) {
        printf("\nVous affrontez : %s\n", dresseurs[i].nom);

        // Combat entre le premier Pokémon de chaque équipe
        combat(joueur.equipe[0], dresseurs[i].equipe[0]);

        // Réinitialiser les points de vie des Pokémon du joueur et de l'adversaire pour les prochains combats
        for (int j = 0; j < 6; j++) {
            joueur.equipe[j]->pointsDeVie = 100;
            dresseurs[i].equipe[j]->pointsDeVie = 100;
        }
    }

    printf("Bienvenue dresseur !\n");
    printf("Après un long chemin et beaucoup de combats avec ton équipe pokémon,\n");
    printf("la dernière étape de ton aventure : La ligue pokémon !\n");
    char *list[] = {"oui", "non"};
    actionBox(list, 2);
    return 0;
}