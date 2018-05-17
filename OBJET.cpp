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
    _restaurationPV(0)
{}

OBJET::OBJET(std::string nomObjet, std::string descriptionObjet, int restaurationPV)
:   _nomObjet(nomObjet),
    _descriptionObjet(descriptionObjet),
    _restaurationPV(restaurationPV)
{}

OBJET baieDoran ("Baie d'Oran",
                 """Cette Baie sert à régénérer "
                   "de 200 PV  votre pokemon "
                   "s'il est dans la merde""",
                 200);
