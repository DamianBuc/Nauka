#include <iostream>
using namespace std;
//zad1

void funkcja2(double& x, double& y)
{
    double tnp = x;
    x = y;
    y = tnp;
}

double funkcja(double*x, double*y)
{
    double tmp =*x;
    *x = *y;
    *y = tmp;
    return *x;
}


int main()
{
    double x,y;
    cin >> x >> y ;
    cout <<funkcja(*x);
    //funkcja2(x, y);
    cout << x << " " << y;
}

