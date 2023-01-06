#include <iostream>
using namespace std;

void funkcja1(int *tab, int *min, int *max, double *srednia)
{

    double Tmp = 0;
    for(int i=0; i<10; i++)
    { 
        if(i==0) *min = * max = tab[0];
        if(*min < tab[i]) *min = tab[i];
        if(*max > tab[i]) *max = tab[i];

        Tmp += tab[i];
    }

    *srednia = Tmp/10;
    cout << "Min = " << *min << endl;
    cout << "Max = " << *max << endl;
    cout << "Srednia = " << *srednia << endl;

}

void funkcja2(int tab[], int &min, int &max, double &srednia)
{

    double Tmp = 0;
    for(int i=0; i<10; i++)
    { 
        if(i==0) min =  max = tab[0];
        if(min < tab[i]) min = tab[i];
        if(max > tab[i]) max = tab[i];

        Tmp += tab[i];
    }

    srednia = Tmp/10;
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Srednia = " << srednia << endl;

}

int main()
{
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    int min, max;
    double srednia;
    
    funkcja1(tab, &min, &max, &srednia);
    cout << endl;
    funkcja2(tab, min, max, srednia);


}