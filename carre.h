#pragma once

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonnée x du sommet supérieur gauche
    int sy;  // Coordonnée y du sommet supérieur gauche
    int cote; // Longueur du côté du carré

public:
    // Constructeurs
    CCarre(); // Constructeur par défaut
    CCarre(int sx1, int sy1, int cote1); // Constructeur paramétré

    // Méthodes pour modifier les valeurs des attributs
    void Setsx(int sx1); // Définir la val x
    void Setsy(int sy1); // Définir la val y
    void Setcote(int cote1); // Définir cote

    // Méthode pour afficher les caractéristiques du carré
    void Afficher();

    // Méthodes pour récupérer les valeurs des attributs
    int Getsx();
    int Getsy();
    int GetCote();

    // Méthode pour déplacer le carré avec une direction et un saut
    void Deplacer(char direction, int saut);

    // Surcharge : déplacer le carré avec un vecteur dx, dy
    void Deplacer(int dx, int dy);

    // Surcharge de l'opérateur << pour afficher un carré
    friend std::ostream& operator<<(std::ostream& os, const CCarre& carre);
};