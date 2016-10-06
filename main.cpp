/*
 -----------------------------------------------------------------------------------
 Laboratoire : Laboratoire1d Exercice 1
 Fichier     : main.cpp
 Auteur(s)   : Adam Zouari et Sébastien Saez
 Date        : 4 octobre 2016

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : g++ (GCC) 6.2.1 
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265;

int main()
{
    double hauteur, ombre, angle;
    
    cout << " Quel est la hauteur du batiment? (en metres) " << endl;
    cin >> hauteur;
    
    cout << endl << "Quel est la longueur de son ombre? (en metres) " << endl;
    cin >> ombre;
    
    if(!ombre) 
    { 
        angle = 90;
    } 
    else
    {
        angle = atan(hauteur/ombre) * 180 / PI;
    }
    cout << endl << "L'angle d'incidence des rayons du soleil est de " << setprecision(1) << fixed << angle << " degres " << endl;

    return 0;
}
