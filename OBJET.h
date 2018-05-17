//
// Created by arnau on 15/05/2018.
//

#ifndef POKEMONJULIENARNAUD_OBJET_H
#define POKEMONJULIENARNAUD_OBJET_H

#include <iostream>
#include <string>


class OBJET {
private:
    std::string _nomObjet;
    std::string _descriptionObjet;
    int         _restaurationPV;
public:

    OBJET();
    OBJET(std::string nomObjet,std::string descriptionObjet, int restaurationPV);



};


#endif //POKEMONJULIENARNAUD_OBJET_H
