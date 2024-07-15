#ifndef FUN_H
#define FUN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"
#include "dresseur.h"

void actionBox(char **actions, int n);
void removeLines(int n);
void combat(Pokemon* joueur, Pokemon* adversaire);
void attribuerPokemonAleatoires(Dresseur* joueur);
#endif