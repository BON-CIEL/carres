#pragma once

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonnée x du sommet supérieur gauche
    int sy;  // Coordonnée y du sommet supérieur gauche
    int cote; // Longueur du côté du carré

public:
    // Méthodes pour modifier les valeurs des attributs
    void Setsx(int sx1); // Définir la val x
    void Setsy(int sy1); // Définir la val y
    void Setcote(int cote1); // Définir cote

    // Méthode pour afficher les caractéristiques du carré
    void Afficher();
};