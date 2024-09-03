#include "Delocalise.h"

Delocalise::Delocalise(string &n,double v,int nb,Fabrication f,bool p):Vaccin(n,v,nb,f)
{
    cout<<"appel du constructeur II pour l'objet :"<<this<<endl;
    deloc=p;
}

Delocalise::~Delocalise()
{
    cout<<"appel du destructeur de delocalise pour :"<<this<<endl;
}

double Delocalise::production(){
    double cout=Vaccin::production();
    if(deloc)
        cout=cout-cout*REDUCTION_DELOC;
    else
        cout=cout/2;

    return cout;
}

void Delocalise::affichage(){
    Vaccin::affichage();
    cout<<"delocalise : "<<deloc<<endl;
}
