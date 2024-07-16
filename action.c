#include "action.h"

void actionBox(char **actions, int n, char *name)
{
    printf("+---------------------+\n");
    int lengthSpaces = 20 - strlen(name);
    printf("| %s", name);
    for (int i = 0; i < lengthSpaces; i++)
        {
            printf(" ");
        }
    printf("|\n");
    for (int i = 0; i < n; i++)
    {
        int lengthSpaces = 17 - strlen(actions[i]);
        printf("| %d. %s", i + 1, actions[i]);
        for (int i = 0; i < lengthSpaces; i++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    printf("+---------------------+\n");
}

void displayHealthBar(int health, char *name)
{
    printf("%s: ", name);
    for (int i = 0; i < health; i += 1)
    {
        printf("|");
    }
    printf("\n");
}

void removeLines(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\033[1A\033[2K");
    }
}

void combat(Pokemon* joueur, Pokemon* adversaire) {
    while (joueur->pointsDeVie > 0 && adversaire->pointsDeVie > 0) {
        // Conversion des attaques en un tableau de pointeurs de caractères
        char *actions[4] = {joueur->attaques[0], joueur->attaques[1], joueur->attaques[2], joueur->attaques[3]};

        displayHealthBar(joueur->pointsDeVie, joueur->nom);
        displayHealthBar(adversaire->pointsDeVie, adversaire->nom);
        actionBox(actions, 4, joueur->nom);
        int choixAttaque;
        scanf("%d", &choixAttaque);
        // removeLines(10);
        choixAttaque--; // pour correspondre à l'indice du tableau

        printf("%s utilise %s!\n", joueur->nom, joueur->attaques[choixAttaque]);
        adversaire->pointsDeVie -= joueur->attaque;
        if (adversaire->pointsDeVie <= 0) {
            printf("%s est KO!\n", adversaire->nom);
            break;
        }

        // Choix de l'attaque pour l'adversaire (aléatoire)
        int attaqueAdversaire = rand() % 4;
        printf("%s utilise %s!\n", adversaire->nom, adversaire->attaques[attaqueAdversaire]);
        joueur->pointsDeVie -= adversaire->attaque;
        if (joueur->pointsDeVie <= 0) {
            printf("%s est KO!\n", joueur->nom);
            break;
        }
    }
}

void combatDresseur(Dresseur* joueur, Dresseur* adversaire) {
    // si le pokemon n'est pas ko alors seulement le pokemon mort change
    Pokemon* joueurPokemon = joueur->equipe[0];
    Pokemon* adversairePokemon = adversaire->equipe[0];
    int currentIndiceJoueur = 0;
    int currentIndiceAdversaire = 0;
    while (joueurPokemon->pointsDeVie > 0 && adversairePokemon->pointsDeVie > 0) {
        combat(joueurPokemon, adversairePokemon);
        if (joueurPokemon->pointsDeVie <= 0) {
            // next pokemon
            if (currentIndiceJoueur == 5) {
                printf("Vous avez perdu contre %s!\n", adversaire->nom);
                break;
            }
            printf("%d!\n", currentIndiceJoueur);
            joueurPokemon = joueur->equipe[++currentIndiceJoueur];
        }
        if (adversairePokemon->pointsDeVie <= 0) {
            // next pokemon
            if (currentIndiceAdversaire == 5) {
                printf("Vous avez battu %s!\n", adversaire->nom);
                break;
            }
            printf("%d!\n", currentIndiceAdversaire);
            adversairePokemon = adversaire->equipe[++currentIndiceAdversaire];
        }
    }


}

void attribuerPokemonAleatoires(Dresseur* joueur) {
    int indicesUtilises[22];
    memset(indicesUtilises, 0, sizeof(indicesUtilises));
    for (int i = 0; i < 6; i++) {
        int index;
        do {
            index = rand() % 22;
        } while (indicesUtilises[index]);
        indicesUtilises[index] = 1;
        joueur->equipe[i] = &pokemons[index];
    }
}