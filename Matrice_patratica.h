#ifndef MATRICE_PATRATICA_H
#define MATRICE_PATRATICA_H
#include <iostream>
#include "Vector.h"
#include "Matrice.h"

class Matrice_patratica : public Matrice
{
    public:
       int dim;
    Matrice_patratica();
    using Matrice :: Matrice;
    Matrice_patratica(int x):Matrice(x,x){};
    friend std::istream &operator>>(std::istream &in, Matrice_patratica &a);
    friend std::ostream &operator<<(std::ostream &out, const Matrice_patratica &a);
    void matrice_verif();
    int determinant();
        int operator=(int x)
    {
    return dim;
    }
};

#endif // MATRICE_PATRATICA_H
