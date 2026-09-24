#ifndef WHILE-EX_H_INCLUDED
#define WHILE-EX_H_INCLUDED
#include <iostream>

using namespace std;


//todo: cate cifre are n
void ex1(){
//cout<<"aici"<<endl;
    int n,cti=0,ctp=0;
    cin >> n;
    if(n == 0)
    {
        cout << 1;
    }
    else
    {
        while(n > 0)
        {

            int aux = n % 10;
            if(aux % 2 == 0 )
            {
                ctp++;
            }
            else{
                cti++;
            }

            n = n / 10;

        }
    }

     cout<<"Numarul introdus are "<<ctp<<" cifre pare "<<endl;
     cout<<"si " << cti << " cifre impare" << endl;
}


//funjctoe ce verifica daca un numar are toate cifrele egale  f(x)=2x+1   f(2)=5    int t=f(2)  t devine 5

bool isCifreIdentice(int numar){
   int uc=numar%10;
   while(numar!=0){
       int cifra=numar%10;
       if(cifra!=uc){
          return false;
       }
       numar=numar/10;

   }

   return true;
}

//functie ce returneaza cifra maxima dintr-un numar
int cifMax(int n){
    int maxx = -1;
    while(n > 0){
        int aux = n % 10;
        if(aux > maxx){
             maxx = aux;
        }
        n = n / 10;
    }

    return maxx;
}

//verif. daca n contine x
bool verifcifre(int n, int x)
{
    int aux = n % 10;
    n = n / 10;
    while(n > 0)
    {
        if(x == aux)
        {
            return true;
        }
        aux = n % 10;
        n = n / 10;
    }
    return false;
}

// eliminarea cifrei de rang k n=8395, k = 2

// n!=0  uc    ct!=k    nou   p    n   ct
// da    5       da     5     10   839 1
// da    9       da     95    100  83  2
// da    3       nu     -      -    8  3
// da    8       da     895   1000  0  4
//nu


int elimK(int n, int k)
{

   int p=1;
   int nou=0;
   int ct=0;
   while(n!=0){
        int uc=n%10;
        if(ct!=k){
            nou=uc*p+nou;
             p=p*10;
        }
        n=n/10;
        ct++;

   }
   return nou;
}

// TEMA

//EX 1: ??


// VARIANTA 1 - ?  7873

int celMaiMareNumar(int n)
{
    int nou = 0;
    int ct = 0;
    int p = 1;
    while(n > 0)
    {
        int uc = n % 10;
        int aux = n / 10;
        while(aux > 0)
        {
            if(uc == aux % 10)
            ct++;
            p = p * 10;
            aux = aux / 10;
        }
        nou = uc * p;
    }
}


int celMaiMareNumar1(int n)
{
    int p = 1;
    int nou = 0;
    int aux;

    
    while(n > 0){
        int uc = n % 10;
        if(uc > (nou / p) % p){
            nou = uc * (p * 10) + nou;
        }
        else{
            nou = nou / 10 + uc;
        }
        p = p * 10;
        n = n / 10;
    }
    return nou;
}



// VARIANTA 2
int celMaiMareNumar2(int n)
{
    int ct = 0;
    int p = 1;
    int nou = 0;
    int cifra = 9;
    while(n > 0)
    {
        int uc = n % 10;
        if(uc > (nou / p) % 10)
        {
            while(cifra >= 0)
            {
                ct++;

                cifra--;
            }
        }
    }
}

//EX 2: ??

int celMaiMicNumar(int n)
{
    int p = 1;
    int nou = 0;
    int aux;

    
    while(n > 0){
        int uc = n % 10;
        if(uc < (nou / p) % p){
            nou = uc * (p * 10) + nou;
        }
        else{
            nou = nou * 10 + uc;
        }
        p = p * 10;
        n = n / 10;
    }
    return nou;
}

//EX 3: ??
/*
bool auAceleasiCifre(int a, int b)
{
    int ct = 0;
    int cifra = 9;
    while(cifra >= 0)
    {
        int uc = a % 10;
        if(uc == )
        
    }
    
}
*/
// EX 4: (TERMINAT)

int nrDivizori(int n)
{
    int i = 1;
    int ct = 0;
    while(i <= n)
    {
        if(n % i == 0)
        {
            ct++;
        }
        i++;
    }
    return ct;
}

//EX 5: TERMINAT
bool estePrim(int n)
{
    int i = 2;
    int ct = 0;
    if(n == 1 || n == 0)
    {
        return false;
    }
    while(i < n)
    {
        if(n % i == 0)
        {
            ct++;
        }
        i++;
    }
    if(ct == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//EX 6: TERMINAT
int sumaDivizoriloProprii(int n)
{
    int i = 1;
    int suma = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            suma = i + suma;
        }
        i++;
    }
    return suma;
}

//EX 7: TERMINAT
bool estePerfect(int n)
{
    int aux = sumaDivizoriloProprii(n);
    if(aux == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//EX 8: TERMINAT
int cmmdc(int a, int b)
{
    if(a >= b)
    {
        int i = a;
        while(i <= a)
        {
            if(a % i == 0 && b % i == 0)
            {
                return i;
            }
            i--;
        }
    }
    if(b >= a)
    {
        int i = b;
        while(i <= b)
        {
            if(b % i == 0 && a % i == 0)
            {
                return i;
            }
            i--;
        }
    }
}

//EX 9: TERMINAT
int cmmmc(int a, int b)
{
    int aux = cmmdc(a, b);
    int aux2 = a * b;
    int s = aux2 / aux;
    return s;

}

//EX 10: TERMINAT
bool areToateCifrelePrime(int n)
{
    int uc = n % 10;
    n = n / 10;
    while(n > 0)
    {
        if(estePrim(uc) == true)
        {
            uc = n % 10;
            n = n / 10;
        }
        else
        {
            return false;
        }
    }
    return true;
}

//EX 11:
/*int celMaiMicNrCuSumaCifrelorGresit(int s)
{
    int a = 0;
    int i = 9;
    while(a < s)
    {
        if(i <= (s - a))
        {
            while(i <= (s - a))
            {
                a = a + i;
            }
        }
        else
        {
            i--;
        }

    }
    return a;
}
*/
int celMaiMicNrCuSumaCifrelor(int s)
{
    int a = 0;
    int p = 1;
    int i = 9;
    while(a < s)
    {
        if(i <= (s - a))
        {
            while(i <= (s - a))
            {
                a = i * p + a;
                p = p * 10;
            }
        }
        else
        {
            i--;
        }

    }
    return a;
}



#endif // WHILE-EX_H_INCLUDED
