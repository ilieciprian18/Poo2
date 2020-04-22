#include "Matrice_patratica.h"
#include <iostream>

std::istream &operator>>(std::istream &inn, Matrice &a) {
    for (int i = 0; i < a.col; i++)
        for (int j = 0; j < a.col; j++) {
            std::cout << "mat[" << i << "][" << j << "]=";
            inn >> a.matrice[i][j];
        }
    return inn;

}
std::ostream &operator<<(std::ostream &out, const Matrice_patratica &a) {
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < a.col; j++)
            out << a.matrice[i][j] << " ";
        out << '\n';
    }
    out << '\n';
    return out;
}
void matrice_verif()
{
//Matricea triunghiulara este mereu si diagonala dar in caz ca se doreste verificarea uneia daca este :
}
Matrice_patratica::determinant()
{
    int det = 0;
    if (row == col) {
        if (row == 1) det = matrice[0][0];
        if (row == 2) det = matrice[0][0] * matrice[1][1] - matrice[0][1] * matrice[1][0];
        if (row == 3) {
            det = matrice[0][0] * matrice[1][1] * matrice[2][2] + matrice[0][1] * matrice[1][2] * matrice[2][0] +
                  matrice[0][2] * matrice[1][0] * matrice[2][1] - matrice[0][2] * matrice[1][1] * matrice[2][0] -
                  matrice[0][0] * matrice[1][2] * matrice[2][1] -
                  matrice[0][1] * matrice[1][0] * matrice[2][2];


        }

    }
    int det2=0;
    if (row == col)
    {
        if(row==1)
            std::cout<<"da";
        if(row==2)
        {
            det2=matrice[0][0]*matrice[1][1];
            if (det2==det)
                std::cout<<"da";
            else std::cout<<"nu";
        }
        if (row==3)
        {
            det2=matrice[0][0]*matrice[1][1]*matrice[2][2];
            if (det2==det)
                std::cout<<"da";
            else std::cout<<"nu";
        }
    }
    std::cout<< det;
}


