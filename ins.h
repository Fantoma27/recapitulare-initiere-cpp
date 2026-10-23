#ifndef INSERARE_H_INCLUDED
#define INSERARE_H_INCLUDED

#include <iostream>
using namespace std;

void afisare(int v[], int d)
{
    for(int i = 0; i < d; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

void inserareElement(int v[], int &d, int poz, int elem)
{
    for(int i = d; i > poz; i--)
    {
        v[i] = v[i - 1];
    }
    v[poz] = elem;
    d++;
}

//Primești un vector ordonat crescător și o valoare. 
//Scrie o funcție care o pune la locul ei, fără să sortezi la final.

void sol1()
{
    int v[100] = {2, 5, 9, 14};
    int elem = 7;
    int d = 4;
    for(int i = 0; i < d; i++)
    {
        if(v[i] > elem)
        {
            inserareElement(v, d, i, elem);
            break;
        }
    };
    afisare(v, d);
    
}


//Scrie o funcție care pune după fi ecare element încă o copie a lui.
void sol2()
{
    int v[100] = {1, 2, 3};
    int d = 3;
    for(int i = 0; i < d; i += 2)
    {
        inserareElement(v, d, i + 1, v[i]);
    }
    afisare(v, d);
}

//Scrie o funcție care pune un 0 între oricare două elemente vecine.

void sol3()
{
    int v[100] ={1, 2, 3};
    int d = 3;
    for(int i = 0; i < d - 1; i += 2)
    {
        inserareElement(v, d, i + 1, 0);
    }
    afisare(v, d);
}

//Scrie o funcție care primește o valoare și o 
//inserează după fiecare element par din vector.

void sol4()
{
    int v[100] = {5, 8, 3, 2};
    int d = 4;
    int elem = 99;
    for(int i = 0; i < d; i++)
    {
        if(v[i] % 2 == 0)
        {
            inserareElement(v, d, i + 1, elem);
        }
    }
    afisare(v, d);
}

#endif // INSERARE_H_INCLUDED