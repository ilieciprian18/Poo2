#ifndef MATRICE_OARECARE_H
#define MATRICE_OARECARE_H
#include <iostream>
#include "Vector.h"
#include "Matrice.h"


class Matrice_oarecare : public Matrice
{
    public:
       int lin;
       int row;
    Matrice_oarecare();
    using Matrice :: Matrice; // copiez constructorii si destructorii din clasa parinte
    Matrice_oarecare(int x,int y):Matrice(x,y){};
    int operator=(int x)
{
    return lin;
}
 friend std::istream &operator>>(std::istream &in, Matrice_oarecare &a);
 friend std::ostream &operator<<(std::ostream &out, const Matrice_oarecare &a);





};

#endif // MATRICE_OARECARE_H
