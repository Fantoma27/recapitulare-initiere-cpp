#ifndef STERGERE_H_INCLUDED
#define STERGERE_H_INCLUDED
#include <iostream>
using namespace std;
void afisare(int v[], int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

//      0   1   2   3   4   5   6   7   8   9
// v =  10, 14, 52, 15, 18, 19, 92, 14, 24, 84 stergere poz = 5
//                      0   1   2   3   4   5   6   7   8   9
//    i<9  v[i]=v[i+1]  10, 14, 52, 15, 18, 19, 92, 14, 24, 84  i
//    5<9  v[5]=92                          92                  6
//    6<9  v[6]=14                              14              7
//    7<9  v[7]=24                                  24          8
//    8<9  v[8]=84                                      84      9
//    9<9   NU   =>  d = 9-1 = 8
//     0   1   2   3   4   5   6   7   8
// v = 10, 14, 52, 15, 18, 92, 14, 24, 84

//Scrie o funcție care șterge din vector toate aparițiile unei valori date.
void stergereElement(int v[], int& d, int poz)
{
    for (int i = poz; i < d - 1; i++)
    {
        v[i] = v[i + 1];
    }
    d--;
}
// 0   1   2   3   4   5   6   7   8   9
// 10, 10, 10, 15, 18, 10, 92, 14, 24, 84
// i < d  if(v[i]==val)   i < d-1  v[i] = v[i+1] d--
//  0<10       da          0<9      v[0]= 10      8
//  1<9        da

void stergereValoare(int v[], int& d, int val)
{
    for(int i = 0; i < d; i++)
    {
        if(v[i]==val){
            stergereElement(v, d, i);
            i--;
        }
    }
}

void sol1()
{
    int v[100] = {10, 10, 10, 15, 18, 10, 92, 14, 24, 84};
    int d = 10;
    int val = 10;

    stergereValoare(v, d, val);

    afisare(v ,d);
}

//Scrie o funcție care șterge din vector toate valorile pare.
void stergerePare(int v[], int& d)
{
    for(int i = 0; i < d; i++)
    {
        if(v[i] % 2 == 0)
        {
            stergereElement(v, d, i);
            i--;
        }
    }
}

void sol2()
{
    int v[100] = {10, 14, 10, 15, 18, 10, 92, 14, 24, 84};
    int d = 10;
    stergerePare(v, d);
    for(int i = 0; i < d; i++)
    {
        cout << v[i] << ' ';
    }
}

//Scrie o funcție care șterge valorile care se repetă, păstrând doar prima apariție a fiecăreia.
// iau fiecare elem cu i si caut cu j dupa el daca mai apare ca sa il sterg
void stergereRepetate(int v[], int& d)
{
    for(int i = 0; i < d; i++)
    {
        for(int j = i + 1; j < d; j++)
        {
            if(v[i] == v[j])
            {
                stergereElement(v, d, j);
                j--;
            }
        }
    }
}

void sol3()
{
    int v[100] = {10, 12, 10, 15, 15, 10, 92, 14, 83, 84};
    int d = 10;
    stergereRepetate(v, d);
    afisare(v, d);
}

//Scrie o funcție care șterge elementele mai mici decât media aritmetică a vectorului.
double mediaAritmetica(int v[], int d)
{
    double s = 0;
    for(int i = 0; i < d; i++)
    {
        s = v[i] + s;
    }
    return s / d;
}

void stergereSubMedie(int v[], int& d)
{
    double ma = mediaAritmetica(v, d);
    for(int i = 0; i < d; i++)
    {
        if(v[i] < ma)
        {
            stergereElement(v, d, i);
            i--;
        }
    }
}

void sol4()
{
    int v[100] = {64, 4, 59, 52, 36, 34, 14, 34, 44, 100};
    int d = 10;
    stergereSubMedie(v, d);
    afisare(v, d);
}

//Scrie o funcție care șterge valorile care apar de un număr par de ori în vector.

// functie ce formeaza fectorul de frecvanta pe valorile unui vectot

void frecventaVector(int v[], int d, int f[])
{
    for(int i = 0; i < d; i++){
        f[v[i]]++;
    }

}

void stergereAparitiiElementVector(int v[],int &d,int f[])
{

    int k = 0;
    for(int i = 0; i < d; i++)
    {
        if(f[v[i]] % 2 != 0)
        {
            v[k++] = v[i];
        }
    }
    d = k;
}
void sol5()
{
    int v[100] = {11, 23, 11, 35, 17, 32, 5, 22, 5, 5, 9};
    int d = 11;
    int f[100] ={};
    frecventaVector(v, d, f);
    stergereAparitiiElementVector(v, d, f);
    for(int i = 0; i < d; i++){
        cout << v[i] << ' ';
    }
}


#endif // STERGERE_H_INCLUDED