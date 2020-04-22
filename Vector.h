#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
class Vector
{
public:
    int dim;
    int* a;
    int current;
    Vector();
    Vector(int x);
    Vector(const Vector &p2)
    {
    a = new int[1];
    dim=p2.dim;
    current = 0;
    }
    ~Vector();
    int add(int data);
    friend std::ostream& operator<<(std::ostream& out, const Vector& afis);
    friend std::istream& operator>> (std::istream& is, Vector& dt);
    void operator=(int x)
    {
        int suma=0;
        for(int i=1;i<=x;i++)
            suma=a[i]+suma;
        std::cout<<suma;
    }
    /*
    friend std::istream& operator>>(std::istream& in,Vector& v);
    friend std::ostream& operator<<(std::ostream& out,Vector& v);
    */
};

#endif
