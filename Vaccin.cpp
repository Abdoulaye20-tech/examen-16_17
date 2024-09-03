#include "Vaccin.h"

Vaccin::Vaccin(string &n,double v,int nb,Fabrication f)
{
    cout<<"appel du constructeur II pour l'objet :"<<this<<endl;
    nom=n;
    volume=v;
    nbr_dose=nb;
    mode=f;
}

Vaccin::~Vaccin()
{
    cout<<"appel du destructeur pour l'objet :"<<this<<endl;
}

double Vaccin::conditionnement(){
    return volume*nbr_dose*COND_UNITE;
}

double Vaccin::fabrication(){
    double cout=volume*nbr_dose*PRIX_BASE;
    if(mode==Fabrication::Standard)
        return cout;
    if(mode==Fabrication::Hightech)
        return cout+=cout*MAJORATION_HIGHTECH;
}

double Vaccin::production(){
    double cout_cond=conditionnement();
    double cout_fab=fabrication();
    return cout_cond+cout_fab;
}

void Vaccin::affichage(){
    cout<<nom<<endl;
    cout<<"volume/dose : "<<volume<<endl;
    cout<<"nombre de doses: "<<nbr_dose<<endl;
    cout<<"mode de fabrication "<<mode<<endl;
}
