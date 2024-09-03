#include <iostream>

using namespace std;

#include "Vaccin.h"
#include "Delocalise.h"
#include "Compagnie.h"

int main(){
    string s1="Zamiflu",s2="Triphas",s3="Royal";
    Delocalise d1(s1, 0.55, 200000, Hightech);
    Delocalise d2(s2, 0.20 , 10000,Standard,true);
    d1.affichage();
    d2.affichage();
    cout<<"Cout de production \n";
    cout<<"cout de production du vaccin 1 : "<<d1.fabrication()<<endl;
    cout<<"cout de production du vaccin 2 : "<<d2.fabrication()<<endl;
    //Creation de la Compagnie
    Vaccin v1(s1, 0.55, 200000, Hightech);
    Vaccin v2(s2, 0.20 , 10000);
    Compagnie c(s3,10);
    c.ajouter(&v1);
    c.ajouter(&v2);
    c.afficher();
    return 0;
}
