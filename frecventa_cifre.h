#ifndef FRECVENTA_CIFRE_H_INCLUDED
#define FRECVENTA_CIFRE_H_INCLUDED
#include <iostream>
using namespace std;

int afisare(int v[], int d)
{
    for(int i = 0; i < d; i++)
    {
        cout << v[i] << ' ';
    }
}

//1: Scrie o funcție care întoarce cifra care apare de cele mai multe ori în toate numerele din vector, luateîmpreună.
void frecventaCifre(int v[], int d, int f[])
{
    
    for(int i = 0; i < d; i++)
    {
        int aux=v[i];
        if(aux == 0)
        {
            f[0]++;
        }else{
            while(aux!=0){
                int  cifra=aux%10;
                f[cifra]++;
                aux=aux/10;
            }
        }
    }
}

//functie ce returneaza pozitia  pe care se afla maximul din vecotr

int pozitia(int f[])
{
    int maxx = -1;
    int poz = -1;
    for(int i = 0; i <= 9; i++)
    {
        if(f[i] > maxx)
        {
            maxx = f[i];
            poz = i;
        }
    }
    return poz;
}

void sol1()
{
    int v[100] = {21, 42, 21};
    int d = 3;
    int f[10]{};
    frecventaCifre(v, d, f);
    int aux = -1;
    cout << pozitia(f);
}

//2: Scrie o funcție care afișează cifrele care nu apar în niciun număr din vector.



void sol2()
{
    int v[100] = {21, 42, 21};
    int d = 3;
    int f[10]{};
    frecventaCifre(v, d, f);
    for(int i = 0; i <10; i++)
    {
        if(f[i] == 0)
        {
            cout<<i<<" ";
        }
    }
}

//3: Scrie o funcție care primește o cifră și întoarce câte numere din vector o conțin.
int cateNumere(int v[], int d, int cifra)
{
    int ct = 0;
    int aux;
    for(int i = 0; i < d; i++)
    {
        aux=v[i];
        while(aux > 0)
        {
            if(aux % 10 == cifra)
            {
                ct++;
                break;
            }
            aux = aux / 10;
        }
    }
    return ct;
}
void sol3()
{
    int v[100] = {70, 17, 23, 7};
    int d = 4;
    int cifra = 7;
    cout << cateNumere(v, d, cifra);
}

#endif