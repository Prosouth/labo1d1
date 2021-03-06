/*
 -----------------------------------------------------------------------------------
 Laboratoire : Laboratoire1d Exercice 1
 Fichier     : main.cpp
 Auteur(s)   : Sébastien Saez et Adam Zouari
 Date        : 4 octobre 2016

 But         : Calculer l'angle d'incidence au sol des rayons du soleil
              derriere l'ombre d'un batiment 

 Remarque(s) : Prise en compte du cas ou l'ombre est nulle

 Compilateur : g++ (GCC) 6.2.1 
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// déclaration de constantes
const double PI = 3.14159265;

int main()
{
   // déclaration de variables
    double hauteur, ombre, angle;
    
    cout << " Quel est la hauteur du batiment? (en metres) " << endl;
    cin >> hauteur;
    
    cout << endl << "Quel est la longueur de son ombre? (en metres) " << endl;
    cin >> ombre;
    
    // calcul de l'angle d'incidence
    if(!ombre)
    {
        angle = 90;
    } 
    else
    {
        angle = atan(hauteur/ombre) * 180 / PI;  // calcul de l'angle + passage de radians en degrés
    }
    
    // affichage du résultat
    cout << endl << "L'angle d'incidence des rayons du soleil est de " 
         << setprecision(1) << fixed << angle << " degres " << endl;

    return 0;
}