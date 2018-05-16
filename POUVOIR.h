//
// Created by arnau on 14/05/2018.
//

#ifndef POKEMONJULIENARNAUD_POUVOIR_H
#define POKEMONJULIENARNAUD_POUVOIR_H

#include <iostream>
#include <string>

enum class Type {
    feu,
    eau,
    roche,
    sol
};
enum class Categorie {
    speciale,
    physique
};

class POUVOIR {
private:
    std::string     _nomAttaque;
    Type            _type;
    float           _precisionAttaque;
    int             _puissanceAttaque; // degats de base de l'attaque / pouvoir
    int             _PP; //Nombre de fois réutilisable
    Categorie       _categorie;
public:
    POUVOIR();
    POUVOIR(std::string nomAttaque, Type type,
            float precisionAttaque, int puissanceAttaque,
            int PP, Categorie categorie);

};


#endif //POKEMONJULIENARNAUD_POUVOIR_H
