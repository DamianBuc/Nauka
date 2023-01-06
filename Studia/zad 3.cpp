#include <iostream>
using namespace std;

int funkcjaS(int *tab)
{
    int srednia = 0;

    for (int i = 0; i < 5; i++)
    {
        srednia += tab[i];
    }

    return srednia / 5;
}

int main()
{
    int tab[5];

    cout << "Podaj 5 liczb: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe: " << endl;
        cin >> tab[i];
    }

    cout << "Srednia wynosi: " << funkcjaS(tab);
}