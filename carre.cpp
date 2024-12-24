#include "carre.h"
#include <iostream>

using namespace std;

// Affecte une nouvelle valeur � sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur � sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur � cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caract�ristiques du carr�
void CCarre::Afficher() {
    cout << "Caract�ristiques du carr�:" << endl;
    cout << "Sommet sup�rieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du c�t�: " << cote << " pixels" << endl;
}

int CCarre::Getsx() {
    return sx;
}

// Retourne la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Retourne la longueur du c�t� du carr�
int CCarre::GetCote() {
    return cote;
}

// D�place le carr� en fonction de la direction et du saut
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

// Surcharge : d�placer le carr� avec un vecteur dx, dy
void CCarre::Deplacer(int dx, int dy) {
    sx += dx;
    sy += dy;
}

// D�finition de l'op�rateur <<
std::ostream& operator<<(std::ostream& os, const CCarre& carre) {
    os << "CCarre {sx: " << carre.sx
        << ", sy: " << carre.sy
        << ", cote: " << carre.cote << "}";
    return os;
}