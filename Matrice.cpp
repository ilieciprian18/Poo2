#include "Matrice.h"
#include "Vector.h"
#include <iostream>
Matrice::Matrice()
{
}
Matrice::Matrice(int nr1,int nr2)
{
    row = nr1;
    col = nr2;
    matrice = new int *[row];
    for (int i = 0; i < row; i++)
        matrice[i] = new int[col];
}
Matrice::Matrice(const Matrice &mat2) {
    col = mat2.col;
    row = mat2.row;
    matrice = new int *[row];
    for (int i = 0; i < row; i++)
        matrice[i] = new int[col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            matrice[i][j] = mat2.matrice[i][j];
}
Matrice::~Matrice()
{
    delete matrice;

}



