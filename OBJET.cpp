//
// Created by arnau on 15/05/2018.
//
#include "OBJET.h"

#include <iostream>
#include <string>

using namespace std;

OBJET::OBJET()
:   _nomObjet("sans nom"),
    _descriptionObjet("sans description"),
    _restaurationPV(0),
    //AJOUT PERSO
    _prixObjet(0)
{}

OBJET::OBJET(std::string nomObjet,
             std::string descriptionObjet,
             int restaurationPV,
             float prixObjet)
:   _nomObjet(nomObjet),
    _descriptionObjet(descriptionObjet),
    _restaurationPV(restaurationPV),
    _prixObjet(prixObjet)
{}

OBJET baieDoran ("Baie d'Oran",
                 """Cette Baie sert à régénérer "
                   "de 200 PV  votre pokemon "
                   "s'il est dans la merde""",
                 200,
                 75);
