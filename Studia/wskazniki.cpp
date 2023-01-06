//zadanie 2
#include <iostream>
using namespace std;

 

    void obliczenia(int t[10],int* min, int* max, double* avg){

        double sumTmp = 0;

        for(int i=0;i<10;i++){

            if(i==0) *min = *max = t[0];

            if(t[i]>*max) *max = t[i]; 

            if(t[i]<*min) *min = t[i]; 

            sumTmp+=t[i];

        }

        *avg = sumTmp/10;

        cout<<"Min: "<<*min<<" | Max: "<<*max<<" | Avg: "<<*avg;

    }   

    void obliczenia(int t[10],int& min, int& max, double& avg){

        double sumTmp = 0;

        for(int i=0;i<10;i++){

            if(i==0) min = max = t[0];

            if(t[i]>max) max = t[i]; 

            if(t[i]<min) min = t[i]; 

            sumTmp+=t[i];

        }

        avg = sumTmp/10;

        cout<<"Min: "<<min<<" | Max: "<<max<<" | Avg: "<<avg;

    }   

    int main()

    {

        int min,max;

        double avg;

        int* wskMin = &min;

        int* wskMax = &max;

        double* wskAvg = &avg;

        int tablica[10] = {1,2,3,4,5,6,7,8,9,10};

        

        obliczenia(tablica,wskMin,wskMax,wskAvg);

        cout<<endl;

        obliczenia(tablica,min,max,avg);

    }