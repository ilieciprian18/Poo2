#include "Vector.h"
#include <iostream>
Vector::Vector()
{
    a = new int[1];
    dim = 1;
    current = 0;
}

Vector::Vector(int x)
{
    a = new int[1];
    dim=x;
    current = 0;
}

Vector::~Vector()
{
    dim=0;
    delete[] a;
}

Vector::add(int data)
{
    a[current]=data;
    current++;

}
std::ostream& operator<<(std::ostream& out, const Vector& afis)
{
    for(int i=0;i<=afis.dim;i++)
    out<<afis.a[i]<<" ";
    return out;
}
std::istream& operator>> (std::istream& is, Vector& dt)
{
    int n;
    is>>n;
    for(int i=0;i<n;i++)
        is>>dt.a[i];
    return is;
}

