#ifndef DRESSEUR_H
#define DRESSEUR_H

#include "pokemon.h"

typedef struct {
    char nom[50];
    char typePrefere[20];
    Pokemon* equipe[6];
} Dresseur;

extern Dresseur dresseurs[];

void initDresseurs();
void afficherEquipe(Dresseur* dresseur);

#endif // DRESSEUR_H
