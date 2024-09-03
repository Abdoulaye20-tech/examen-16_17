#ifndef VACCIN_H
#define VACCIN_H

#include <iostream>
#include <string>

using namespace std;

const double COND_UNITE = 0.5;
const double PRIX_BASE = 1.5;
const double MAJORATION_HIGHTECH = 0.5;
const double REDUCTION_DELOC = 0.2;

enum Fabrication{
    Standard,
    Hightech
};

class Vaccin
{
    public:
        Vaccin(string &,double,int,Fabrication f=Fabrication::Standard);
        ~Vaccin();
        double conditionnement();
        double fabrication();
        double production();
        void affichage();

    private:
        string nom;
        double volume;
        int nbr_dose;
        Fabrication mode;
};

#endif // VACCIN_H
