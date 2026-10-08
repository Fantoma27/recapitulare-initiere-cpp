#ifndef CAUTARE_BINARA_H_INCLUDED
#define CAUTARE_BINARA_H_INCLUDED

#include "algoritmi.h"
#include <iostream>

using namespace std;

//2.1
bool gasireValoare(int v[], int dim, int x)
{
    if(cautareBinara(v, dim, x) != -1)
    {
        return true;
    }
    return false;
}
void sol21()
{
    int v[100] = {30, 12, 45, 7, 19};
    int dim = 4;
    cout << gasireValoare(v, dim, 20);
}

#endif // CAUTARE_BINARA_H_INCLUDED
