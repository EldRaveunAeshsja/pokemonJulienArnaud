//
// Created by arnau on 14/05/2018.
//

#ifndef POKEMONJULIENARNAUD_POKEMON_H
#define POKEMONJULIENARNAUD_POKEMON_H

#include <iostream>
#include <string>

class POKEMON {
private:
    std::string     _nomPokemon;
    float           _prixPokemon;
    //Type Truc spé à faire
    int             _pvPokemon;
    int             _lvlPokemon;
    int             _attaquePokemon;
    int             _puissancePokemon; // ATTAQUE SPECIALE = Puissance
    int             _defensePokemon;
    int             _defenseMagicPokemon; //Defense contre la puissance
    // ATTAQUE comme pour Type
    float           _vitessePokemon;
    // OBJET comme pour Type

public:
    //Constructeurs
    POKEMON();
    // POKEMON(************ ******* ********** *************)

    //Methodes


};


#endif //POKEMONJULIENARNAUD_POKEMON_H
