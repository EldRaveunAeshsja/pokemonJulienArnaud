//
// Created by arnau on 14/05/2018.
//

#ifndef POKEMONJULIENARNAUD_POKEMON_H
#define POKEMONJULIENARNAUD_POKEMON_H

#include <iostream>
#include <string>

enum class Type {
    feu,
    eau,
    plante,
    spectre,
    tenebre,
    dragon,
    acier,
    insecte,
    electrique,
    combat,
    glace,
    fee,
    normale,
    poison,
    psy,
    roche,
    sol,
    vol,
};

class POKEMON {
private:
    std::string     _nomPokemon;
    float           _prixPokemon;
    Type            _type;
    int             _pvPokemon;
    int             _lvlPokemon;
    int             _attaquePokemon;
    int             _attaqueSPEPokemon;
    int             _defensePokemon;
    int             _defenseSPEPokemon;
    // ATTAQUE truc spe à faire
    float           _vitessePokemon;
    // OBJET comme attaque

public:
    //Constructeurs
    POKEMON();
    // POKEMON(************ ******* ********** *************)

    //Methodes


};


#endif //POKEMONJULIENARNAUD_POKEMON_H
