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
extern Pokemon* listDresseur1;
extern Pokemon* listDresseur2;
extern Pokemon* listDresseur3;
void initDresseurs();
void freeDresseurs();

#endif // DRESSEUR_H
