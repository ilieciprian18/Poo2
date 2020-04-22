#ifndef MATRICE_H
#define MATRICE_H
#include <iostream>
#include "Vector.h">

class Matrice
{
    public:
        Vector *v;
        int **matrice;
        int row;
        int col;
        virtual void display() const=0;
        Matrice();
        Matrice(int nr1,int nr2);
        Matrice(const Matrice &mat2);
        ~Matrice();

};

#endif // MATRICE_H
