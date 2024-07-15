#include <stdio.h>
#include "action.h"
#include "type.h"
#include <stdlib.h>

int main()
{
    printf("%s",getType(0).name);
    printf("Bienvenue dresseur !\n");
    printf("Après un long chemin et beaucoup de combats avec ton équipe pokémon,\n");
    printf("la dernière étape de ton aventure : La ligue pokémon !\n");
    char *list[] = {"oui", "non"};
    actionBox(list, 2);
    return 0;
}