#include "pokemon.h"
#include <stdio.h>

Pokemon pokemons[] = {
    {"Pikachu", "Électrique", {"Éclair", "Tonnerre", "Queue de Fer", "Rapace"}, "Vitesse", "Sol", 35, 55, 40, 90},
    {"Bulbizarre", "Plante/Poison", {"Fouet Lianes", "Canon Graine", "Vampirisme", "Tranch'Herbe"}, "Résistance", "Feu", 45, 49, 49, 45},
    {"Salamèche", "Feu", {"Flammèche", "Griffe", "Rugissement", "Grimace"}, "Attaque", "Eau", 39, 52, 43, 65},
    {"Carapuce", "Eau", {"Pistolet à O", "Écume", "Repli", "Morsure"}, "Défense", "Électrique", 44, 48, 65, 43},
    {"Papilusion", "Insecte/Vol", {"Poudre Dodo", "Cyclone", "Dard-Venin", "Étonnement"}, "Attaque spéciale", "Roche", 60, 45, 50, 70},
    {"Roucool", "Normal/Vol", {"Tornade", "Cru-Aile", "Cyclone", "Hâte"}, "Vitesse", "Électrique", 40, 45, 40, 56},
    {"Rattata", "Normal", {"Vive-Attaque", "Coup d'Boule", "Reflet", "Morsure"}, "Vitesse", "Combat", 30, 56, 35, 72},
    {"Sabelette", "Sol", {"Tunnel", "Griffe", "Jet de Sable", "Tranche"}, "Défense", "Eau", 50, 75, 85, 40},
    {"Nidoran♀", "Poison", {"Griffe", "Dard-Venin", "Rugissement", "Double Pied"}, "Attaque", "Psy", 55, 47, 52, 41},
    {"Mélofée", "Fée", {"Vague Psy", "Charme", "Plaquage", "Météores"}, "Défense", "Acier", 70, 45, 48, 35},
    {"Goupix", "Feu", {"Flammèche", "Rugissement", "Grimace", "Feu Follet"}, "Vitesse", "Eau", 38, 41, 40, 65},
    {"Rondoudou", "Normal/Fée", {"Berceuse", "Métronome", "Doux Baiser", "Torgnoles"}, "PV", "Acier", 115, 45, 20, 20},
    {"Nosferapti", "Poison/Vol", {"Morsure", "Ultrason", "Cru-Aile", "Vive-Attaque"}, "Vitesse", "Psy", 40, 45, 35, 55},
    {"Paras", "Insecte/Plante", {"Griffe", "Poudre Dodo", "Tranch'Herbe", "Para-Spore"}, "Attaque", "Feu", 35, 70, 55, 25},
    {"Mimitoss", "Insecte/Poison", {"Dard-Venin", "Para-Spore", "Poudre Dodo", "Psyko"}, "Attaque spéciale", "Feu", 60, 55, 50, 45},
    {"Psykokwak", "Eau", {"Pistolet à O", "Choc Mental", "Rugissement", "Griffe"}, "Attaque spéciale", "Électrique", 50, 52, 48, 55},
    {"Férosinge", "Combat", {"Karaté Chop", "Furie", "Balayage", "Poursuite"}, "Attaque", "Psy", 40, 80, 35, 70},
    {"Caninos", "Feu", {"Flammèche", "Morsure", "Rugissement", "Hâte"}, "Attaque", "Eau", 55, 70, 45, 60},
    {"Machoc", "Combat", {"Karaté Chop", "Balayage", "Ultimapoing", "Force"}, "Attaque", "Psy", 70, 80, 50, 35},
    {"Spectrum", "Spectre/Poison", {"Hypnose", "Dévorêve", "Poing Ombre", "Cauchemar"}, "Attaque spéciale", "Psy", 45, 50, 45, 95},
    {"Ectoplasma", "Spectre/Poison", {"Hypnose", "Dévorêve", "Poing Ombre", "Cauchemar"}, "Attaque spéciale", "Psy", 60, 65, 60, 110},
    {"Draco", "Dragon/Vol", {"Ouragan", "Draco-Queue", "Dracochoc", "Fatal-Foudre"}, "Attaque", "Glace", 61, 84, 65, 70},
    {"Dracolosse", "Dragon/Vol", {"Ouragan", "Draco-Queue", "Dracochoc", "Fatal-Foudre"}, "Attaque", "Glace", 91, 134, 95, 80},
    {"Hypnomade", "Psy", {"Choc Mental", "Hypnose", "Psyko", "Protection"}, "Attaque spéciale", "Insecte", 85, 73, 70, 67},
    {"Alakazam", "Psy", {"Choc Mental", "Téléport", "Psyko", "Protection"}, "Attaque spéciale", "Insecte", 55, 50, 45, 120}
};

void afficherPokemon(Pokemon* team) {
    for (int i = 0; i < 6; i++) {
        afficherPokemon(&team[i]);
    }
}