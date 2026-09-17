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
#endif // WHILE-EX_H_INCLUDED
