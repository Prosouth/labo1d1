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
    
    if(ombre == 0) 
    { 
        angle = 0;
        cout << endl << " Il n'y a aucune ombre, donc pas d'angle d'incidence" << endl;
    } else
    {
        cout << endl << "L'angle d'incidence des rayons du soleil est de " << angle << " degres " << endl;
    
    }
    
   
}