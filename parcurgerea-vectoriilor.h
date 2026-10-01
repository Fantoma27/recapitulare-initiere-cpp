#ifndef PARCURGEREA-VECTORIILOR_H_INCLUDED
#define PARCURGEREA-VECTORIILOR_H_INCLUDED
#include<iostream>
using namespace std;



//functie ce afiseaza eleemntele unui vector de numere intregi

int afisareaElemVect(int v[],int dim)
{
    int n;
    for(int i = 0; i <dim; i++)
    {
        cout<<v[i]<<" ";
    }
}


void sol1(){

    int v[100] = {12, 32, 43, 54, 15, 27, 38, 41, 50, 63, 67, 72, 79, 84, 88, 91, 95, 10, 22, 35, 49, 58, 61, 74};

    int dim=20;

    afisareaElemVect(v,20);


}

//todo:cate nr prime avem in vector



bool isPrim(int n)
{
    int i;
    if(n == 0 || n == 1)
    {
        return false;
    }
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int contorPrimeVector(int v[], int dim)
{
    int ct = 0;
    for(int i = 0; i <= dim; i++)
    {
        if(isPrim(i) == true)
        {
            ct++;
        }
    }
    return ct;

}

void soll2(){
    int v[100] = {23, 5, 4, 3, 7};

    int dim = 5;

  cout<<  contorPrimeVector(v, 5);

//TEMA

//EX1/sub-C

int punctul_c(int v[], int n)
{
    int i, j, x, nr = 0, nou = 0;
    int c[10];
    for(i = 1; i <= n; i++)
    {
        nr = 0;
        for(x = v[i]; x > 0; x = x / 10)
        {
            nr++;
            c[nr] = x % 10;
        }
        if(c[1] == c[nr])
        {
            r = 0;
            for(j = 1; j <= nr; j++)
            {
                nou = nou * 10 + c[j;]
            }
            cout << nou;
        }
    }
}

// EX1 / SUb G
int punctul_g(int v[], int n)
{
    int i, j, x, s, nr, p = 1;
    int c[10];
    for(i = 1; i <= n; i++)
    {
        s = v[i];
        while(s > 9)
        {
            nr = 0;
            for(x = s; x > 0; x = x/ 10)
            {
                nr++;
                c[nr]= x % 10;
            }
            s = s + c[j];

        }
        s = 0;
        for(j = 1; j <= nr; j++)
        {
            s = s + c[j];
        }
    }


    if(s % 2 == 0)
    {
        nr = 0;
        for(x = v[i]; x > 0; x = x / 10)
        {
            nr++;
            c[nr] = x % 10;
        }
        for(j = 1; j <=nr; j++)
        {
            p = p *c[j];
        }
        cout << p;
    }
}

//EX 2 / sunpunct a.

int CIfraMinima(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int minn = 9;
    while(n > 0)
    {
        int cifra = n % 10;
        if(cifra < minn){
            minn = cifra;
        }
        n  = n/10;
    }
    return minn;
}

//EX 2 / subpunct c

bool areCifra(int n, intc)
{
    if(n == 0 && c == 0)
    {
        return true;
    }
    while(n > 0){
        if(n % 10 == c){
            return true;
        }
        n = n /10;
    }
    return false;
}

#endif // PARCURGEREA-VECTORIILOR_H_INCLUDED
