#ifndef DELOCALISE_H
#define DELOCALISE_H

#include "Vaccin.h"

class Delocalise : public Vaccin
{
    public:
        Delocalise(string &,double,int,Fabrication f=Fabrication::Standard,bool d=false);
        ~Delocalise();
        double production();
        void affichage();

    private:
        bool deloc;
};

#endif // DELOCALISE_H
