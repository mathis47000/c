#ifndef DRESSEUR_H
#define DRESSEUR_H

#include "pokemon.h"
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[50];
    char phrase[100];
    Pokemon* equipe[6];
} Dresseur;

extern Dresseur dresseurs[];
extern Pokemon* list;
void initDresseurs();
void afficherEquipe(Dresseur* dresseur);
void freeDresseurs();

#endif // DRESSEUR_H
