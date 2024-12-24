#include "carre.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
CCarre::CCarre() : sx(0), sy(0), cote(0) {}

// Constructeur paramétré
CCarre::CCarre(int sx1, int sy1, int cote1) : sx(sx1), sy(sy1), cote(cote1) {}

// Affecte une nouvelle valeur à sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur à sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur à cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caractéristiques du carré
void CCarre::Afficher() {
    cout << "Caractéristiques du carré:" << endl;
    cout << "Sommet supérieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du côté: " << cote << " pixels" << endl;
}

int CCarre::Getsx() {
    return sx;
}

// Retourne la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Retourne la longueur du côté du carré
int CCarre::GetCote() {
    return cote;
}

// Déplace le carré en fonction de la direction et du saut
void CCarre::Deplacer(char direction, int saut) {
    switch (direction) {
    case 'n': // Nord
        sy -= saut;
        break;
    case 's': // Sud
        sy += saut;
        break;
    case 'o': // Ouest
        sx -= saut;
        break;
    case 'e': // Est
        sx += saut;
        break;
    default:
        cout << "Direction invalide!" << endl;
    }
}

// Surcharge : déplacer le carré avec un vecteur dx, dy
void CCarre::Deplacer(int dx, int dy) {
    sx += dx;
    sy += dy;
}

// Définition de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const CCarre& carre) {
    os << "CCarre {sx: " << carre.sx
        << ", sy: " << carre.sy
        << ", cote: " << carre.cote << "}";
    return os;
}