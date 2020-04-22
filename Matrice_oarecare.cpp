#include "Matrice_oarecare.h"
#include <iostream>


std::istream &operator>>(std::istream &in, Matrice_oarecare &a) {
    for (int i = 0; i < a.row; i++)
        for (int j = 0; j < a.col; j++) {
            std::cout << "mat[" << i << "][" << j << "]=";
            in >> a.matrice[i][j];
        }
    return in;

}
std::ostream &operator<<(std::ostream &out, const Matrice_oarecare &a) {
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < a.col; j++)
            out << a.matrice[i][j] << " ";
        out << '\n';
    }
    out << '\n';
    return out;
}


