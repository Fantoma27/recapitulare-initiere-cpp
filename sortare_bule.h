#ifndef SORTARE_BULE_H_INCLUDED
#define SORTARE_BULE_H_INCLUDED

#include "algoritmi.h"
#include <iostream>
//3.1 Scrie o funcție care întoarce valoarea din mijloc după ordonare. Dacă vectorul are un număr par de elemente,întoarce media celor două din mijloc.
int mediana(int v[], int dim)
{
    sortareCrescator(v, dim);
    if(dim % 2 == 0)
    {
        return (v[dim / 2 - 1] + v[dim / 2]) / 2;
    }
    else
    {
        return v[dim / 2];
    }
}

void sol31()
{
    int v[100] = {7, 2, 9, 4, 5};
    int v2[100] = {35, 56, 19, 42};
    int dim = 4;
    cout << mediana(v2, dim);
}

//3.2 Scrie o funcție care întoarce a k-a cea mai mare valoare din vector.
int kValoare(int v[], int dim, int k)
{
    sortareDescrescator(v, dim);
    return v[k - 1];
}

void sol32()
{
    int v[100] = {7, 2, 9, 4, 5};
    int dim = 5;
    cout << kValoare(v, dim, 5);
}

//3.3  ???  Scrie o funcție care ordonează crescător doar valorile pare, lăsând valorile impare pe pozițiile lor.
int ordonarePare(int v[], int dim)
{
    sortareCrescator(v, dim);
    int pare[100];
    int nrPare = 0;
    for(int i = 0; i < dim ; i++)
    {
        if(v[i] % 2 == 0)
        {
            pare[nrPare] = v[i];
            nrPare++;
        }
    }

}

//3.4 Scrie o funcție care spune dacă vectorul este deja ordonat crescător, fără să-l sortezi
bool dejaOrdonat(int v[], int dim)
{
    int aux[100];
    for(int i = 0; i < dim; i++)
    {
        aux[i] = v[i];
    }
    sortareCrescator(v, dim);
    for(int i = 0; i < dim; i++)
    {
        if(v[i] != aux[i])
        {
            return false;
        }
    }
    return true;
}
void sol34()
{
    int v[100] = {1, 3, 7};
    int v2[100] = {1, 7, 3};
    int dim = 3;
    cout << dejaOrdonat(v2, dim);
}

//3.5 Scrie o funcție care întoarce câte interschimbări face metoda bulelor până ordonează vectorul
int cateInterschimbari(int v[], int dim)
{
    int ct = 0;
    bool sortat = false;
    while (sortat == false)
    {
        sortat = true;
        for (int i = 0; i < dim - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                ct++;
                sortat = false;
            }
        }
    }
    return ct;
}
void sol35()
{
    int v[100] = {3, 1, 2};
    int dim = 3;
    cout << cateInterschimbari(v, dim);
}

#endif // SORTARE_BULE_H_INCLUDED
