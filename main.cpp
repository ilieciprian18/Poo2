#include "Vector.h"
#include "Matrice.h"
#include <iostream>
using namespace std;

int main()
{
    Vector b(10);
    Vector a =b;
    b.add(2);
    b.add(3);
    b.dim=b.dim+1;
    cin>>b;
    cout<<b;

}
