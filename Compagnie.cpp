#include "Compagnie.h"

Compagnie::Compagnie(string &nm,int nmax){
    cout<<"appel du constructeur de compagnie pour :"<<this<<endl;
    nom=nm;
    card=0;
    max=nmax;
    stock=new Vaccin*[max];
}

void Compagnie::ajouter(Vaccin *m){
    if(card<max)
        stock[card++]=m;
    else
        cout<<"le stock de Vaccin est plein"<<endl;
}

void Compagnie::afficher(){
    for(int i=0;i<card;i++)
        stock[i]->affichage();
}

Compagnie::~Compagnie(){
    cout<<"appel du destructeur de Compagnie pour :"<<this<<endl;
    if(stock){
        for(int i=0;i<card;i++)
            delete stock[i];
        delete stock;
    }
}
