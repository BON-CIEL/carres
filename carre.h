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
};