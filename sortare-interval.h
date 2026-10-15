#ifndef SORTARE-INTERVAL_H_INCLUDED
#define SORTARE-INTERVAL_H_INCLUDED

#include <iostream>

using namespace std;

// v = 9, 7, 5, 3, 1, 2   (start = 0, finish = 5)
// sortat == false   i   if(v[i] > v[i + 1])   aux   v[i]   v[i + 1]
//  da               0           da             9     7        9
//                   1           da            9      5        9
//                   2           da             9   3         9
//                   3           da             9     1        9
//                   4           da             9     2        9
// v = 7, 5, 3, 1, 2, 9
//      da           0           da           7       5        7
//                   1           da             7    3        7
//                   2           da             7    1         7
//                   3           da            7      2       7
//                   4           nu             -     7        9
// v = 5, 3, 1, 2, 7, 9
//        da         0           da             5    3        5
//                   1           da             5     1        5
//                   2           da              5    2       5
//                   3           nu             -    5        7
//                   4           nu             -     7        9
// v = 3, 1, 2, 5, 7, 9
//    da             0           da             3     1        3
//                   1           da             3     2        3
//                   2           nu            -     3        5
//                   3           nu             -     5        7
//                   4           nu             -     7        9
// v = 1, 2, 3, 5, 7, 9
//      da          0           nu             -     1        2
//                   1           nu             -     2        3
//                   2           nu             -     3        5
//                   3           nu             -    5         7
//                   4          nu              -     7        9
// v = 1, 2, 3, 5, 7, 9        0
void sortareInterval(int v[], int start, int finish)
{
    bool sortat = false;
    while (sortat == false)
    {
        sortat = true;
        for (int i = start; i < finish; i++)
        {
            if (v[i] > v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sortat = false;
            }
        }
    }
}

void sortareIntervalDescrescator(int v[], int start, int finish)
{
    int aux;
    bool sortat = false;
    while (sortat == false)
    {
        sortat = true;
        for (int i = start; i < finish; i++)
        {
            if (v[i] < v[i + 1])
            {
                v[i + 1] = aux;
                int aux = v[i];
                v[i] = v[i + 1];
                sortat = false;
            }
        }
    }
}

void sortarePrimaJumatate(int v[], int dim)
{
    sortareInterval(v, 0, dim / 2 - 1);
}

void sortareAdouaJumatateDesc(int v[], int dim)
{
    sortareIntervalDescrescator(v, dim / 2, dim - 1);

}

void sortareJumatate(int v[], int dim)
{
    sortareInterval(v, 0,  dim / 2 - 1);
    sortareIntervalDescrescator(v, dim / 2, dim - 1);
}

void solSortare3()
{
    int v[100] = {9, 7, 5, 3, 1, 2};
    int n = 6;
    sortareJumatate(v, n);
    for (int i = 0; i < n; i++)
        {
        cout << v[i] << " ";
    }
}

void sortarePeInterval(int v[], int a, int b)
{
    if(a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    sortareInterval(v, a, b);
}

void solPeInterval()
{
    int v[100] = {9, 7, 5, 3, 1, 2};
    int n = 6;
    int a = 1;
    int b = 3;
    sortarePeInterval(v, a, b);
    for (int i = 0; i < n; i++)
        {
        cout << v[i] << " ";
    }
}

void sortareTreiParti(int v[], int n)
{
    sortareInterval(v, 1, n / 3 - 1);
    sortareInterval(v, n / 3, 2 * (n / 3) - 1);
    sortareInterval(v, 2*(n / 3), n - 1);
}
#endif // SORTARE-INTERVAL_H_INCLUDED
