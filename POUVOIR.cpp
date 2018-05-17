//
// Created by arnau on 14/05/2018.
//

#include "POUVOIR.h"

#include <iostream>
#include <string>

using namespace std;


//J'ai découvert une autre façons d'écrire un constructeur
POUVOIR::POUVOIR()
    : _nomAttaque("sans nom"),
      _type(Type::eau),
      _precisionAttaque(0),
      _puissanceAttaque(0),
      _PP(0),
      _categorie(Categorie::speciale)
{}

POUVOIR::POUVOIR(std::string nomAttaque,Type type,float precisionAttaque,int puissanceAttaque,int PP,Categorie categorie)
    : _nomAttaque(nomAttaque),
      _type(type),
      _precisionAttaque(precisionAttaque),
      _puissanceAttaque(puissanceAttaque),
      _PP(PP),
      _categorie(categorie)
{}

POUVOIR aireDeau("Aire d'eau",      Type::eau,  1,      50,     10, Categorie::speciale);
POUVOIR hydroqueue("Hydroqueue",    Type::eau,  0.9,    190,    10, Categorie::physique);
POUVOIR coupVictoire("CoupVictoire",Type::feu,  0.95,   300,    3,  Categorie::speciale);
POUVOIR rafaleFeu("RafaleFeu",      Type::feu,  0.90,   210,    5,  Categorie::speciale);
POUVOIR rocBoulet("RocBoulet",      Type::roche,0.6,    150,    10, Categorie::physique);
POUVOIR bouleRoc("BouleRoc",        Type::roche,0.7,    75,     30, Categorie::physique);
POUVOIR seisme("Séisme",            Type::sol,  0.4,    250,    10, Categorie::physique);
POUVOIR tourbiSable("TourbiSable",  Type::sol,  0.7,    75,     15, Categorie::speciale);

