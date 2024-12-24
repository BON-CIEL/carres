#pragma once

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonn�e x du sommet sup�rieur gauche
    int sy;  // Coordonn�e y du sommet sup�rieur gauche
    int cote; // Longueur du c�t� du carr�

public:
    // M�thodes pour modifier les valeurs des attributs
    void Setsx(int sx1); // D�finir la val x
    void Setsy(int sy1); // D�finir la val y
    void Setcote(int cote1); // D�finir cote

    // M�thode pour afficher les caract�ristiques du carr�
    void Afficher();

    // M�thodes pour r�cup�rer les valeurs des attributs
    int Getsx();
    int Getsy();
    int GetCote();

    // M�thode pour d�placer le carr� avec une direction et un saut
    void Deplacer(char direction, int saut);

    // Surcharge : d�placer le carr� avec un vecteur dx, dy
    void Deplacer(int dx, int dy);

    // Surcharge de l'op�rateur << pour afficher un carr�
    friend std::ostream& operator<<(std::ostream& os, const CCarre& carre);
};