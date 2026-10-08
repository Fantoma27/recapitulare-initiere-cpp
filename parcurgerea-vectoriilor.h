#ifndef PARCURGEREA-VECTORIILOR_H_INCLUDED
#define PARCURGEREA-VECTORIILOR_H_INCLUDED
#include<iostream>
using namespace std;



//functie ce afiseaza eleemntele unui vector de numere intregi

void afisareaElemVect(int v[],int dim)
{
    int n;
    for(int i = 0; i <dim; i++)
    {
        cout<<v[i]<<" ";
    }
}


/*void sol1(){

    int v[100] = {12, 32, 43, 54, 15, 27, 38, 41, 50, 63, 67, 72, 79, 84, 88, 91, 95, 10, 22, 35, 49, 58, 61, 74};

    int dim=20;

    afisareaElemVect(v,20);


} */

//cate nr prime avem in vector



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
    for(int i = 0; i < dim; i++)
    {
        if(isPrim(v[i]) == true)
        {
            ct++;
        }
    }
    return ct;

}

void sol2(){
    int v[100] = {23, 5, 4, 3, 7};

    int dim = 5;

  cout<<  contorPrimeVector(v, 5);
}

//TEMA

//EX1/sub-C rasturnat
// functie ce calculeaza rasturantul nui numar
//functie ce returneaza prima cifra a unui numar
//functie ultima cifra a unui numar

//rasturnat
int rasturnat(int n)
{
    int r = 0;
    while(n > 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}

int ultimaCifra(int n)
{

    return n%10;
}

int primaCifra(int n)
{

    return rasturnat(n)%10;
}

void afisareRasturnat(int v[], int n)
{
    int ras, uc, pc;
    for(int i = 0; i < n; i++){
        if(ultimaCifra(v[i])==primaCifra(v[i])){

            cout<<rasturnat(v[i])<<endl;
        }
    }
}


void sol1c(){

    int v[100]={12,323,45,65,1231};
     int n=5;
    afisareRasturnat(v, n);
}

// ex1 subpunctul d
// D6={1,2,3,6} proprii {2,3}

// i   n % i
// 1     da   =>return i;


//  k  n % k  ct  n = 6
//  2    da    1
//  3    da    2
//  4 > n/2 => ct = 2

//ct=0 k=2
// k<=3  n%K==0 ct   k
// a      da    1    3
// a      da    2    4
// n

int  divizoriProprii(int n)
{

   int ct=0;
   for(int k=2;k<=n/2;k++){

       if(n%k==0){
        ct++;
       }
   }
   return ct;
}

void sol1d(){
    int v[100] = {8, 27, 125};
    int n = 3;
    int k = 12;
    bool semn=true;
    for(int i = 0; i < n &&semn; i++)
    {
        if(divizoriProprii(v[i]) != k)
        {
            semn= false;
        }
    }

     semn?cout<<"sunt toate":cout<<" nu sunt"<<endl;
}

// EX1 / subpunct G / AFISATI PRODUSUL CIFRELOR LA FIECARE ELEMENT AL VECTORULUI CE ARE CIFRA DE CONTROL UN NUMAR PAR
int sumaCifrelor(int n){
    int suma = 0;
    while(n > 0){
        suma = suma + n % 10;
        n = n / 10;
    }
    return suma;
}
int produsCifre(int n){
    int suma = 1;
    while(n > 0){
        suma = suma * n % 10;
        n = n / 10;
    }
    return suma;
}

int cifraDeControl(int n){
    while(n >= 10){
        n = sumaCifrelor(n);
    }
    return n;
}

bool isPar(int n){
    return n % 2 == 0;
}

//functie ce returneaza produsul cifrelor unui numar

//

void sol1g(){
    int v[300] = {1111, 2112, 5112, 1234};
    int n = 4;
    int p = 1;
    for(int i = 0; i < n; i++){
        if(isPar(cifraDeControl(v[i]))){
            cout<<v[i]<<" are produsul cifrelor "<<produsCifre(v[i])<<endl;
        }
    }
}


// EX 2 / SUBP D  = CATE  NUMERE PRIME INTRE ELE CU POZ PE CARE STAU AVEM IN VECTOR


int numerePrimeCuPozitia(int v[], int n)
{
    int ct = 0;
    for(int i = 0; i < n;i++){
        if(isPrim(v[i]) == true && isPrim(i) == true){
            ct++;
        }
    }
    return ct;
}



bool ePalindrom(int n)
{
    if(n == rasturnat(n))
    {
        return true;
    }
    return false;
}
void punctul_c(int v[], int n)
{
    for(int i = 0; i < n; i++){
        if(ePalindrom(v[i]) == true)
        {
            cout << v[i] << ' ';
        }
    }
}



// EX1 / SUb G REZOLVAT MAI SUS
/*int punctul_g(int v[], int n)
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
}*/

//EX 2 / sunpunct a.

int CifraMinima(int n)
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

bool areCifra(int n, int c)
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
