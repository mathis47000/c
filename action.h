#ifndef FUN_H
#define FUN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"
#include "dresseur.h"
#include <unistd.h>

void actionBox(char **actions, int n, char *name);
void displayHealthBar(int health, char *name);
void removeLines(int n);
void combat(Pokemon* joueur, Pokemon* adversaire);
void combatDresseur(Dresseur* joueur, Dresseur* adversaire);
void attribuerPokemonAleatoires(Dresseur* joueur);
#endif