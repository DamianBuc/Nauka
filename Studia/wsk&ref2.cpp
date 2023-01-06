#include <iostream>
using namespace std;

double min1(double x, double y)
{
    if (x >= y)
        return y;
    else
        return x;
}

void min2(double x, double y, double *z)
{
    if (x >= y)
        *z = y;
    else
        *z = x;
}
void min3(double x, double y, double &z)
{
    if (x >= y)
        z = y;
    else
        z = x;
}

int main()
{

    double a = 7, b = 3;
    double c;

    cout << min1(a, b) << endl;
    min2(a, b, &c);
    cout << c << endl;
    min3(a, b, c);
    cout << c << endl;
}
