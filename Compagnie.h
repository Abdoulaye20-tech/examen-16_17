#ifndef COMPAGNIE_H
#define COMPAGNIE_H

#include "Vaccin.h"

class Compagnie
{
    public:
        Compagnie(string &,int);
        ~Compagnie();
        void ajouter(Vaccin *);
        void afficher();

    private:
        string nom;
        int card;
        int max;
        Vaccin **stock;

};

#endif // COMPAGNIE_H
