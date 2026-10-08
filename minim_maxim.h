#ifndef MINIM_MAXIM_H_INCLUDED
#define MINIM_MAXIM_H_INCLUDED

#include "algoritmi.h"
#include <iostream>

using namespace std;
// 1.1 Scrie o funcție care întoarce diferența dintre cea mai mare și cea mai mică valoare din vector
int amplitudinea(int v[], int dim)
{
    return v[pozMaxim(v, dim)] - v[pozMinim(v, dim)];
}

void sol1()
{
    int v[100] = {7, 2, 9, 4, 5};
    int v2[100] = {4, 4, 4};
    int dim = 3;
    cout << amplitudinea(v2, dim);
}

//1.2 Scrie o funcție care întoarce câte poziții sunt între minim și maxim. Dacă apar de mai multe ori, se ia primaapariție a fi ecăruia
int difDePozitie(int v[], int dim)
{
    if(pozMaxim(v, dim) > pozMinim(v, dim))
    {
        return pozMaxim(v, dim) - pozMinim(v, dim);
    }
    else
    {
        return pozMinim(v, dim) - pozMaxim(v, dim);
    }
}

void sol2()
{
    int v1[100] = {7, 2, 9, 4, 5};
    int v2[100] = {1, 8, 3, 0};
    int dim = 5;
    cout << difDePozitie(v1, dim);
}

//1.3 Scrie o funcție care interschimbă minimul cu maximul, lăsând restul vectorului neatins
void interschimbare(int v[], int dim)
{
    int aux = v[pozMaxim(v, dim)];
    v[pozMaxim(v, dim)] = v[pozMinim(v, dim)];
    v[pozMinim(v, dim)] = aux;
}

void sol3()
{
    int v[100] = {7, 2, 9, 4, 5};
    int dim = 5;
    interschimbare(v, dim);
    for(int i = 0; i < dim; i++){
        cout << v[i] << ' ';
    }
}

//1.4 ???    Scrie o funcție care întoarce a doua cea mai mare valoare. Valorile care se repetă se numără o singură dată
int aDouaValoare(int v[], int dim)
{
    int maxx = pozMaxim(v, dim);
    for(int i = 0; i < dim; i++)
    {
        if(v[i] < maxx)
        {
            return i;
        }
    }
}

void sol4()
{
    int v1[100] {7, 2, 9, 4, 9};
    int dim = 5;
    cout << aDouaValoare(v1, dim);
}

//1.5 Scrie o funcție care afi șează maximul fi ecărui grup de 3 elemente vecine, luate pe rând de la stânga ladreapta.
/*int max3(int v[], dim)
{

}*/

#endif // MINIM_MAXIM_H_INCLUDED
