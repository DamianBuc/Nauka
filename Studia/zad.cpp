#include <iostream>
using namespace std;

void roznica(int a, int b, int*c)
{
    *c = a - b;
}

void roznica1(int a, int b, int& c)
{
    c = a - b;
}

int main()
{
    int a = 5, b = 10;
    int c;

    //roznica(a, b, &c);
    //cout << c << endl;

    roznica1(a, b, c);
    cout << c;
}